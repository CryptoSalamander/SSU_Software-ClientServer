// ClientSocket.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "final_20150291_client.h"
#include "ClientSocket.h"
#include "final_20150291_clientDlg.h"

// CClientSocket

CClientSocket::CClientSocket()
{
}

CClientSocket::~CClientSocket()
{
}


// CClientSocket ��� �Լ�


void CClientSocket::OnClose(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	ShutDown();
	Close();
	CSocket::OnClose(nErrorCode);
}


void CClientSocket::OnReceive(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	TCHAR buffer[1024] = _T("");
	if (Receive(buffer, sizeof(buffer)) > 0)
	{
		Cfinal_20150291_clientDlg* pMain = (Cfinal_20150291_clientDlg*)AfxGetMainWnd();
		pMain->m_list.AddString(LPCTSTR(buffer));
		pMain-> m_list.SetCurSel(pMain->m_list.GetCount() - 1);
	}
	CSocket::OnReceive(nErrorCode);
}
