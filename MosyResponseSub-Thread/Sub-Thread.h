#pragma once
#include "pch.h"
#include "MosyMessageQueue.h"
#include "MosyRequestPackage.h"
#include "MosyRequestQueuePackage.h"
#include "MosyResponsePackage.h"
#include "MosyResponseQueuePackage.h"
#include "MosySocket.h"
#include "MosyRequestDeserializer.h"
#include "MosyResponseSerializer.h"
#include "MosyDataPackage.h"
#include "MosyHtmlPackage.h"
#include "MosyDataSerializer.h"
#include "MosyHtmlSerializer.h"
#include "ThreadStruct.h"
#include "MosyLogger.h"
#include "CoreStruct.h"
#include "MosyRequestWrapper.h"
#include <string.h>
using namespace std;

DWORD _stdcall SubThread(LPVOID Param);
DWORD _stdcall SenderThread(LPVOID Param);

DWORD _stdcall InitThread(LPVOID Param)
{
	MosySocket Socket;
	//MosyLogger::Log(MosyValue(L"Mosy InitThread Ready"));
	try
	{
		Socket = (((CoreStruct*)Param)->MessageQueue->GetRequestSocket());
		wchar_t str[7];
		wsprintfW(str, L"%d", Socket.GetConnectPort());
		wstring ReceiveData = Socket.Receive();
		MosyRequestPackage RequestPackage = MosyRequestDeserializer::Parse(ReceiveData);
		MosyLogger::Log(MosyValue(L"Accept Connect from " + Socket.GetConnectAddr() + L" on Port " + str + L" to " + RequestPackage.TargetInterface + L" with Method " + RequestPackage.Method.GetString()));
		MosyRequestQueuePackage qp;
		qp.Package = RequestPackage;
		qp.ClientSocket = Socket.GetHandler();
		MosyRequestQueuePackage RequestQueuePackage = qp;
		MosyRequestPackage RequestPack = RequestQueuePackage.Package;
		try
		{
			//MosyLogger::Log(MosyValue(L"Mosy Sub-Thread Ready"));
			MosyModuleManager* ModuleManager = ((CoreStruct*)Param)->ModuleManager;
			MosyResponseQueuePackage qp;
			MosyResponsePackage Response;
			MosyRequestWrapperResult Result = MosyRequestWrapper::GetRequestTarget(RequestPack.TargetInterface, RequestPack.Method);
			if (Result[L"Type"].GetString() == L"RestController")
			{
				RestfulControllerTamplate TestController = ModuleManager->LoadRestfulController(Result[L"Path"]);
				MosyValue v = (*TestController)(RequestPackage.Params);
				MosyDataPackage DataPack;
				DataPack.Data = v.GetString();
				Response = MosyResponseSerializer::Serialize(MOSY_200, DataPack);
			}
			else if (Result[L"Type"].GetString() == L"Resource")
			{
				MosyHtmlSerializer HtmlSerializer;
				string Path = MosyString::WString2String(RequestPackage.TargetInterface);
				MosyHtmlPackage HtmlPackage = HtmlSerializer.AddFile(Result[L"Path"].GetString());
				if (HtmlPackage.Exit)
				{
					Response = MosyResponseSerializer::Serialize(MOSY_200, HtmlPackage);
				}
				else
				{
					Response = MosyResponseSerializer::Serialize(MOSY_404, HtmlPackage);
				}
			}
			else if (Result[L"Type"].GetString() == L"ERROR")
			{
				MosyHtmlPackage HtmlPackage;
				HtmlPackage.Exit = false;
				const char* strCharA_ = "<HTML><TITLE>Not Found</TITLE>\r\n<BODY><h1 align='center'>404</h1><br/><h1 align='center'>file not found.</h1>\r\n</BODY></HTML>\r\n";
				HtmlPackage.Html.insert(HtmlPackage.Html.end(), strCharA_, strCharA_ + strlen(strCharA_));
				HtmlPackage.Length = HtmlPackage.Html.size();
				HtmlPackage.type = L"text/html";
				Response = MosyResponseSerializer::Serialize(MOSY_404, HtmlPackage);
				MosyLogger::Log(Result[L"Msg"]);
			}
			qp.ClientSocket = RequestQueuePackage.ClientSocket;
			qp.Package = Response;
			//((CoreStruct*)Param)->MessageQueue->PushResponsePackage(qp);
			//MosyLogger::Log(MosyValue(L"Mosy Sub-Thread Terminal"));
			MosyResponseQueuePackage ResponseQueuePackage = qp;
			MosySocket Socket;
			try
			{
				Socket = ResponseQueuePackage.ClientSocket;
				if (ResponseQueuePackage.Package.Body.size() != 0)
				{
					Socket.Send(ResponseQueuePackage.Package.Head);
					Socket.Send(ResponseQueuePackage.Package.Body, ResponseQueuePackage.Package.Size);
				}
				Socket.Close();
			}
			catch (MosySocket::MosySocketException e)
			{
				MosyLogger::Log(MosyValue(MosyString::String2WString(e.what())));
				Socket.Close();
			}
			catch (exception e)
			{
				MosyLogger::Log(MosyValue(MosyString::String2WString(e.what())));
			}
		}
		catch (exception e)
		{
			MosyLogger::Log(MosyValue(MosyString::String2WString(e.what())));
			MosySocket(RequestQueuePackage.ClientSocket).Close();
		}
	}
	catch (MosySocket::MosySocketException e)
	{
		MosyLogger::Log(MosyValue(MosyString::String2WString(e.what())));
		Socket.Close();
	}
	catch (exception e)
	{
		MosyLogger::Log(MosyValue(MosyString::String2WString(e.what())));
	}
	//MosyLogger::Log(MosyValue(L"Mosy InitThread Terminal"));
	return 0;
}