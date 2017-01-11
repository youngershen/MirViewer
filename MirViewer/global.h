#pragma once

#include "stdafx.h"
#define MAX_LOADSTRING 255

// 全局变量: 
HINSTANCE hInst;                                // 当前实例
WCHAR szTitle[MAX_LOADSTRING];                  // 标题栏文本
WCHAR szAuthorName[MAX_LOADSTRING];             // 作者
WCHAR szAuthorEmail[MAX_LOADSTRING];            // 作者邮箱
WCHAR szWindowClass[MAX_LOADSTRING];            // 主窗口类名
WCHAR szOpenFileName[MAX_LOADSTRING];           // 文件名
OPENFILENAME openFileName;
HANDLE fileHandle;