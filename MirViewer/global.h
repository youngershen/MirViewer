#pragma once
#ifndef  GLOBAL_H
#define GLOBAL_H
#define MAX_LOADSTRING 1024
// ȫ�ֱ���: 
HINSTANCE hInst;                                // ��ǰʵ��
HWND hWnd;                                      // ������
WCHAR szTitle[MAX_LOADSTRING];                  // �������ı�
WCHAR szAuthorName[MAX_LOADSTRING];             // ����
WCHAR szAuthorEmail[MAX_LOADSTRING];            // ��������
WCHAR szWindowClass[MAX_LOADSTRING];            // ����������
WCHAR szOpenFileFullName[MAX_LOADSTRING];       // ����·����Ϣ�������ļ���
WCHAR szOpenFileName[MAX_LOADSTRING];           // �ļ���
WCHAR szOpenFileExt[MAX_LOADSTRING];            // �ļ���׺
OPENFILENAME ofnObj;                            // �û�GetOpenFile���ļ��ṹ��

#endif //  GLOBAL_H


