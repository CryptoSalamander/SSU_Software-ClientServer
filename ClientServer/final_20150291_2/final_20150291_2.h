
// final_20150291_2.h : final_20150291_2 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// Cfinal_20150291_2App:
// �� Ŭ������ ������ ���ؼ��� final_20150291_2.cpp�� �����Ͻʽÿ�.
//

class Cfinal_20150291_2App : public CWinApp
{
public:
	Cfinal_20150291_2App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cfinal_20150291_2App theApp;
