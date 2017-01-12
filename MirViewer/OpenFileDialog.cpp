#include "stdafx.h"
#include "OpenFileDialog.h"


OpenFileDialog & OpenFileDialog::instance()
{
    static OpenFileDialog dialog;
    return dialog;
}

OpenFileDialog::OpenFileDialog()
{
    ZeroMemory(&this->openFileName, sizeof(this->openFileName));
    this->openFileName.lStructSize = sizeof(this->openFileName);
    
    if (NULL != this->hwndOwner)
    {
        this->openFileName.hwndOwner = this->hwndOwner;
    }
    
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

    if (NULL != this->nFilterIndex)
    {
        this->openFileName.nFilterIndex = this->nFilterIndex;
    }
}


OpenFileDialog::OpenFileDialog(const OpenFileDialog& dialog)
{

}

OpenFileDialog::OpenFileDialog(HWND hwndOwner, LPCTSTR lpstrFilter, LPTSTR lpstrCustomFilter, DWORD nFilterIndex)
{
    this->hwndOwner = hwndOwner;
    this->lpstrFilter = lpstrFilter;
    this->lpstrCustomFilter = lpstrCustomFilter;
    this->nFilterIndex = nFilterIndex;
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

WCHAR OpenFileDialog::getFileName()
{
    return this->szFileName;
}