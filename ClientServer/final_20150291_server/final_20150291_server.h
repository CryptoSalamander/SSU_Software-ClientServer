
// final_20150291_server.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// Cfinal_20150291_serverApp:
// �� Ŭ������ ������ ���ؼ��� final_20150291_server.cpp�� �����Ͻʽÿ�.
//

class Cfinal_20150291_serverApp : public CWinApp
{
public:
	Cfinal_20150291_serverApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern Cfinal_20150291_serverApp theApp;