#pragma once

#define MAX_LOADSTRING 1024

// ȫ�ֱ���: 
HINSTANCE hInst;                                // ��ǰʵ��
WCHAR szTitle[MAX_LOADSTRING];                  // �������ı�
WCHAR szAuthorName[MAX_LOADSTRING];             // ����
WCHAR szAuthorEmail[MAX_LOADSTRING];            // ��������
WCHAR szWindowClass[MAX_LOADSTRING];            // ����������
WCHAR szOpenFileFullName[MAX_LOADSTRING];       // ����·����Ϣ�������ļ���
WCHAR szOpenFileName[MAX_LOADSTRING];           // �ļ���
WCHAR szOpenFileExt[MAX_LOADSTRING];            // �ļ���׺
OPENFILENAME ofnStructure;                      // �û�GetOpenFile���ļ��ṹ��

