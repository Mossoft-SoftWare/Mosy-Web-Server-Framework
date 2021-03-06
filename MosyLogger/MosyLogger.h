#pragma once
#include "MosyObject.h"
#include "MosyString.h"
#include "MosyValue.h"
#include <string>
#include <ctime>
#include <queue>
using namespace std;

DWORD __stdcall LogThread(LPVOID Param);
class _declspec(dllexport) MosyLogger
{
protected:
	static HANDLE Thread;
public:
	static wstring GenHead();
	static queue<string> LogList;
	static void BootLogo();
	static void Log(MosyValue Text);
};

