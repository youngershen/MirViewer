#include "stdafx.h"
#include "OpenFileDialog.h"


OpenFileDialog & OpenFileDialog::instance()
{
    static OpenFileDialog dialog;
    return dialog;
}

OpenFileDialog & OpenFileDialog::instance(HWND hwndOwner, LPCTSTR lpstrTitle, DWORD flags)
{
    static OpenFileDialog * dialog = new OpenFileDialog(hwndOwner,lpstrTitle,flags);
    return *dialog;
}

OpenFileDialog::OpenFileDialog()
{
    ZeroMemory(&this->openFileName, sizeof(this->openFileName));
    this->openFileName.lpstrFile = this->lpstrFile;
    this->openFileName.lStructSize = sizeof(this->openFileName);
    this->openFileName.hwndOwner = this->hwndOwner;
    this->openFileName.nFilterIndex = this->nFilterIndex;
    this->openFileName.nMaxFile = this->nMaxFile;
    this->openFileName.lpstrFileTitle = this->lpstrFileTitle;
    this->openFileName.nMaxFileTitle = this->nMaxFileTitle;
    this->openFileName.lpstrInitialDir = this->lpstrInitDir;
    this->openFileName.lpstrTitle = this->lpstrTitle;
    this->openFileName.Flags = this->flags;

    if (NULL != this->lpstrFilter)
    {
        this->openFileName.lpstrFilter = this->lpstrFilter;
    }
    else
    {
        this->openFileName.lpstrFilter = L"All Files\0*.*\0\0";
    }

    if (NULL != this->lpstrCustomFilter)
    {
        this->openFileName.lpstrCustomFilter = this->lpstrCustomFilter;
        this->openFileName.nMaxCustFilter = sizeof(this->lpstrCustomFilter);
    }
}


OpenFileDialog::OpenFileDialog(const OpenFileDialog& dialog)
{

}

OpenFileDialog::OpenFileDialog(
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
    DWORD flags
   )

{
    this->hwndOwner = hwndOwner;
    this->lpstrFilter = lpstrFilter;
    this->lpstrCustomFilter = lpstrCustomFilter;
    this->nFilterIndex = nFilterIndex;
    this->lpstrFile = lpstrFile;
    this->nMaxFile = nMaxFile;
    this->lpstrFileTitle = lpstrFileTitle;
    this->nMaxFileTitle = nMaxFileTitle;
    this->lpstrInitDir = lpstrInitDir;
    this->lpstrTitle = lpstrTitle;
    this->flags = flags;
    OpenFileDialog();
}

OpenFileDialog::OpenFileDialog(
    HWND hwndOwner,
    LPCTSTR lpstrTitle,
    DWORD flags)
{
    this->hwndOwner = hwndOwner;
    this->lpstrTitle = lpstrTitle;
    this->flags = flags;
    this->lpstrFile = (LPTSTR) this->szFileName;
    this->lpstrFile[0] = '\0';
    OpenFileDialog();
}

OpenFileDialog OpenFileDialog::operator=(OpenFileDialog const &)
{
    return OpenFileDialog();
}

OpenFileDialog::~OpenFileDialog()
{
}

HWND OpenFileDialog::getHwndOwner()
{
    return this->hwndOwner;
}

HANDLE OpenFileDialog::getFileHandle()
{
    return this->fileHandle;
}

OPENFILENAME OpenFileDialog::getOpenFileName()
{
    return this->openFileName;
}

WCHAR * OpenFileDialog::getFileName()
{
    return this->szFileName;
}

bool OpenFileDialog::open()
{
    return GetOpenFileName(&this->openFileName);
}

