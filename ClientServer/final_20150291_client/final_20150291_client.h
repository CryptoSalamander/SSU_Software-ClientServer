
// final_20150291_client.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// Cfinal_20150291_clientApp:
// �� Ŭ������ ������ ���ؼ��� final_20150291_client.cpp�� �����Ͻʽÿ�.
//

class Cfinal_20150291_clientApp : public CWinApp
{
public:
	Cfinal_20150291_clientApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern Cfinal_20150291_clientApp theApp;