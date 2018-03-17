// ChildSocket.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "final_20150291_server.h"
#include "ChildSocket.h"
#include "ListenSocket.h"
#include "final_20150291_serverDlg.h"
// CChildSocket

CChildSocket::CChildSocket()
{
}

CChildSocket::~CChildSocket()
{
}


// CChildSocket ��� �Լ�


void CChildSocket::SetListenSocket(CListenSocket* pSocket)
{
	m_listensocket = pSocket;
}


void CChildSocket::OnClose(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	m_listensocket->CloseClientSocket(this);
	CSocket::OnClose(nErrorCode);
}


void CChildSocket::OnReceive(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	CString strTmp = _T(""), strIPAddress = _T("");
	UINT uPortNumber = 0;
	TCHAR* buffer = _T("");
	GetPeerName(strIPAddress, uPortNumber);
	CString check;
	CString y;
	Cfinal_20150291_serverDlg* p;
	int i;
	if (Receive(buffer, sizeof(buffer)) > 0)
	{ 
		Cfinal_20150291_serverDlg* pMain = (Cfinal_20150291_serverDlg*)AfxGetMainWnd();
		check = (LPCTSTR)buffer;
		for (i = 0; i < p->york; i++)
		{
			p->m_york.GetText(i, y);
			check.Replace(y,_T("***"));
		}
		buffer = (TCHAR*)(LPCTSTR)check;
		strTmp.Format(_T("[%s:%d] : %s"), strIPAddress, uPortNumber, check);
		pMain->m_list.AddString(strTmp);
		pMain->m_list.SetCurSel(pMain->m_list.GetCount() - 1);
		m_listensocket->MultiCast(buffer);
		
	}
	CSocket::OnReceive(nErrorCode);
}
