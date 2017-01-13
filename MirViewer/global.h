#pragma once

#define MAX_LOADSTRING 1024

// 全局变量: 
HINSTANCE hInst;                                // 当前实例
WCHAR szTitle[MAX_LOADSTRING];                  // 标题栏文本
WCHAR szAuthorName[MAX_LOADSTRING];             // 作者
WCHAR szAuthorEmail[MAX_LOADSTRING];            // 作者邮箱
WCHAR szWindowClass[MAX_LOADSTRING];            // 主窗口类名
WCHAR szOpenFileFullName[MAX_LOADSTRING];       // 包含路径信息的完整文件名
WCHAR szOpenFileName[MAX_LOADSTRING];           // 文件名
WCHAR szOpenFileExt[MAX_LOADSTRING];            // 文件后缀
OPENFILENAME ofnStructure;                      // 用户GetOpenFile的文件结构体

