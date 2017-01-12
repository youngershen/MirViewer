#include "stdafx.h"
#include "OpenFileDialog.h"


OpenFileDialog::OpenFileDialog()
{
    ZeroMemory(&this->openFileDialog, sizeof(this->openFileDialog));
    this->openFileDialog.lStructSize = sizeof(this->openFileDialog);
}

OpenFileDialog::OpenFileDialog(HANDLE parentWnd)
{
    this->parentWnd = parentWnd;
}

OpenFileDialog::~OpenFileDialog()
{
}

HANDLE OpenFileDialog::getParentWnd()
{
    return this->parentWnd;
}

HANDLE OpenFileDialog::getFileHandle()
{
    return this->fileHandle;
}

OPENFILENAME OpenFileDialog::getOpenFileDialog()
{
    return this->openFileDialog;
}

WCHAR OpenFileDialog::getFileName()
{
    return this->szFileName;
}