#pragma once

#include "stdafx.h"
#define MAX_LOADSTRING 255

// ȫ�ֱ���: 
HINSTANCE hInst;                                // ��ǰʵ��
WCHAR szTitle[MAX_LOADSTRING];                  // �������ı�
WCHAR szAuthorName[MAX_LOADSTRING];             // ����
WCHAR szAuthorEmail[MAX_LOADSTRING];            // ��������
WCHAR szWindowClass[MAX_LOADSTRING];            // ����������
WCHAR szOpenFileName[MAX_LOADSTRING];           // �ļ���
OPENFILENAME openFileName;
HANDLE fileHandle;