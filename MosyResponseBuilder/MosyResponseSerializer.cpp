#include "pch.h"
#include "MosyResponseSerializer.h"

MosyResponsePackage MosyResponseSerializer::Serialize(ResponseStatus Status, MosyDataPackage DataPackage)
{
	MosyResponsePackage Response;
	std::wstring str;
	wchar_t sss[2333];
	switch (Status)
	{
	case MOSY_100:
		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 100 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_101:
		wchar_t sss[2333];
		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 101 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_200:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 200 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_204:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 204 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_206:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 206 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_301:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 301 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_302:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 302 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_303:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 303 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_304:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 304 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_401:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 401 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_402:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 402 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_403:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 403 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_404:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 404 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_405:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 405 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_406:
		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 406 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_408:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 408 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_414:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 414 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_415:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 415 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_416:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 416 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_499:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 499 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_500:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 500 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_501:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 501 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_502:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 502 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_503:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 503 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_504:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 504 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_505:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 505 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_428:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 428 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_429:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 429 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_431:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 431 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_511:

		wsprintfW(sss, L"%ld", DataPackage.Data.length());
		str = L"HTTP/1.1 511 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: application/json\r\n\r\n";
		Response.Head = str;
		break;
	default:
		break;
	}
	//Response.Body = DataPackage.Data.data();
	Response.Body.insert(Response.Body.begin(), DataPackage.Data.c_str(), DataPackage.Data.c_str() + DataPackage.Data.length());
	Response.Size = DataPackage.Data.length();
	return Response;
}

MosyResponsePackage MosyResponseSerializer::Serialize(ResponseStatus Status, MosyHtmlPackage DataPackage)
{
	MosyResponsePackage Response;
	std::wstring str;
	wchar_t sss[2333];
	switch (Status)
	{
	case MOSY_100:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 100 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_101:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 101 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_200:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 200 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_204:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 204 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_206:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 206 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_301:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 301 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_302:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 302 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_303:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 303 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_304:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 304 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_401:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 401 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_402:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 402 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_403:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 403 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_404:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 404 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_405:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 405 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_406:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 406 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_408:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 408 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_414:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 414 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_415:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 415 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_416:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 416 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_499:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 499 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_500:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 500 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_501:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 501 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_502:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 502 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_503:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 503 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_504:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 504 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_505:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 505 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_428:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 428 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_429:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 429 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_431:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 431 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	case MOSY_511:

		wsprintfW(sss, L"%ld", DataPackage.Length);
		str = L"HTTP/1.1 511 \r\nConnection: keep-alive\r\nServer:Mosy-Server-Framework\r\nContent-Length: ";
		str += sss;
		str += L"\r\nContent-Type: " + DataPackage.type + L"\r\n\r\n";
		Response.Head = str;
		break;
	default:
		break;
	}
	//Response.Body = DataPackage.Html;
	Response.Body.insert(Response.Body.begin(), DataPackage.Html.data(), DataPackage.Html.data() + DataPackage.Length);
	Response.Size = DataPackage.Length;
	return Response;
}
