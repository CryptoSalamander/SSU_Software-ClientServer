// ClientSocket.cpp : 구현 파일입니다.
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


// CClientSocket 멤버 함수


void CClientSocket::OnClose(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	ShutDown();
	Close();
	CSocket::OnClose(nErrorCode);
}


void CClientSocket::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	TCHAR buffer[1024] = _T("");
	if (Receive(buffer, sizeof(buffer)) > 0)
	{
		Cfinal_20150291_clientDlg* pMain = (Cfinal_20150291_clientDlg*)AfxGetMainWnd();
		pMain->m_list.AddString(LPCTSTR(buffer));
		pMain-> m_list.SetCurSel(pMain->m_list.GetCount() - 1);
	}
	CSocket::OnReceive(nErrorCode);
}
