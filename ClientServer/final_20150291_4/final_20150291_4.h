
// final_20150291_4.h : final_20150291_4 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// Cfinal_20150291_4App:
// �� Ŭ������ ������ ���ؼ��� final_20150291_4.cpp�� �����Ͻʽÿ�.
//

class Cfinal_20150291_4App : public CWinApp
{
public:
	Cfinal_20150291_4App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cfinal_20150291_4App theApp;
