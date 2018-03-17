// ChildSocket.cpp : 구현 파일입니다.
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


// CChildSocket 멤버 함수


void CChildSocket::SetListenSocket(CListenSocket* pSocket)
{
	m_listensocket = pSocket;
}


void CChildSocket::OnClose(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	m_listensocket->CloseClientSocket(this);
	CSocket::OnClose(nErrorCode);
}


void CChildSocket::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
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
