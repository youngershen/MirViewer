#pragma once
#include <Windows.h>

class OpenFileDialog
{   

public:
    HANDLE getFileHandle();
    HWND getHwndOwner();
    OPENFILENAME getOpenFileName();
    WCHAR getFileName();

    static OpenFileDialog& instance();

private:
    OpenFileDialog();
    OpenFileDialog(OpenFileDialog const &);
    OpenFileDialog(HWND hwndOwner, LPCTSTR lpstrFilter, LPTSTR lpstrCustomFilter, DWORD nFilterIndex);
    OpenFileDialog operator = (OpenFileDialog const&);
    ~OpenFileDialog();
    
private:
    HANDLE fileHandle;
    HWND hwndOwner;
    OPENFILENAME openFileName;
    WCHAR szFileName;
    LPCTSTR lpstrFilter;
    LPTSTR lpstrCustomFilter;
    DWORD nFilterIndex;
};

