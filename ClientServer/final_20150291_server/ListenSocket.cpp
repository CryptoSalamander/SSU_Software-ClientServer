// ListenSocket.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "final_20150291_server.h"
#include "ListenSocket.h"
#include "ChildSocket.h"
#include "final_20150291_serverDlg.h"

// CListenSocket

CListenSocket::CListenSocket()
{
}

CListenSocket::~CListenSocket()
{
}


// CListenSocket 멤버 함수


void CListenSocket::OnAccept(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	CChildSocket* pChild = new CChildSocket;
	BOOL check = Accept(*pChild);
	if (check == FALSE)
	{
		delete pChild;
		AfxMessageBox(_T("접속 실패"));
		return;
	}
	pChild->SetListenSocket(this);
	m_childlist.AddTail(pChild);

	Cfinal_20150291_serverDlg* pMain = (Cfinal_20150291_serverDlg*)AfxGetMainWnd();

	pMain->m_list.AddString(_T("서버 접속 허용"));
	pMain->m_list.SetCurSel(pMain->m_list.GetCount() - 1);

	CAsyncSocket::OnAccept(nErrorCode);
}


void CListenSocket::CloseClientSocket(CSocket* pChild)
{
	POSITION pos;
	pos = m_childlist.Find(pChild);
	if (pos != NULL)
	{
		if (pChild != NULL)
		{
			pChild->ShutDown();
			pChild->Close();
		}
		m_childlist.RemoveAt(pos);
		delete pChild;
	}
}


void CListenSocket::MultiCast(TCHAR* buffer)
{
	POSITION pos;
	pos = m_childlist.GetHeadPosition();
	CChildSocket* pChild = NULL;
	while (pos != NULL)
	{
		pChild = (CChildSocket*)m_childlist.GetNext(pos);
		if (pChild != NULL)
			pChild->Send(buffer, lstrlen(buffer) * 2);
	}
}
