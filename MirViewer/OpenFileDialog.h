#pragma once
#include <Windows.h>

class OpenFileDialog
{   
    public:
        OpenFileDialog();
        OpenFileDialog(HANDLE parentWnd);

        ~OpenFileDialog();

        HANDLE getFileHandle();
        HANDLE getParentWnd();
        OPENFILENAME getOpenFileDialog();
        WCHAR getFileName();

    private:
        HANDLE fileHandle;
        HANDLE parentWnd;
        OPENFILENAME openFileDialog;
        WCHAR szFileName;
};

