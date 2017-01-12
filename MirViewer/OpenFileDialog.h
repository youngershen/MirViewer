#pragma once
#include <Windows.h>

class OpenFileDialog
{   

public:
    HANDLE getFileHandle();
    HWND getHwndOwner();
    OPENFILENAME getOpenFileName();
    WCHAR *  getFileName();
    bool open();
    static OpenFileDialog& instance();
    static OpenFileDialog& instance(HWND hwndOwner, LPCTSTR lpstrTitle, DWORD flags);

private:
    OpenFileDialog();
    OpenFileDialog(OpenFileDialog const &);
    OpenFileDialog(
        HWND hwndOwner,
        LPCTSTR lpstrFilter, 
        LPTSTR lpstrCustomFilter,
        DWORD nFilterIndex,
        LPTSTR lpstrFile,
        DWORD nMaxFile,
        LPTSTR lpstrFileTitle,
        DWORD nMaxFileTitle,
        LPCTSTR lpstrInitDir,
        LPCTSTR lpstrTitle,
        DWORD flags);
    OpenFileDialog(
        HWND hwndOwner,
        LPCTSTR lpstrTitl, 
        DWORD flags);
    OpenFileDialog operator = (OpenFileDialog const&);
    ~OpenFileDialog();
    
private:
    HANDLE fileHandle;
    HWND hwndOwner;
    OPENFILENAME openFileName;
    WCHAR szFileName[255];
    LPCTSTR lpstrFilter;
    LPTSTR lpstrCustomFilter;
    DWORD nFilterIndex;
    LPTSTR lpstrFile;
    DWORD nMaxFile;
    LPTSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCTSTR lpstrInitDir;
    LPCTSTR lpstrTitle;
    DWORD flags;
};

