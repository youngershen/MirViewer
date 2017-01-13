#include "stdafx.h"
#include "utils.h"
#include "global.h"

//extern OPENFILENAME ofnObj;
//extern HWND hWnd;
//extern WCHAR szOpenFileExt;
//extern WCHAR szOpenFileName;
//extern WCHAR szOpenFileFullName[1024];

DWORD MAX_LENGTH = 1024;

bool openFile()
{
    ZeroMemory(&ofnObj, sizeof(ofnObj));
    ofnObj.lStructSize = sizeof(ofnObj);
    ofnObj.hwndOwner = hWnd;
    ofnObj.hInstance = NULL;
    ofnObj.lpstrFilter = NULL;
    ofnObj.lpstrCustomFilter = NULL;
    ofnObj.nMaxCustFilter = MAX_LENGTH;
    ofnObj.nMaxFile = MAX_LENGTH;
    ofnObj.nFilterIndex = NULL;
    ofnObj.lpstrFile = (LPWSTR)szOpenFileFullName;


    return false;
}