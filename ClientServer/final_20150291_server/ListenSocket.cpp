// ListenSocket.cpp : ���� �����Դϴ�.
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


// CListenSocket ��� �Լ�


void CListenSocket::OnAccept(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	CChildSocket* pChild = new CChildSocket;
	BOOL check = Accept(*pChild);
	if (check == FALSE)
	{
		delete pChild;
		AfxMessageBox(_T("���� ����"));
		return;
	}
	pChild->SetListenSocket(this);
	m_childlist.AddTail(pChild);

	Cfinal_20150291_serverDlg* pMain = (Cfinal_20150291_serverDlg*)AfxGetMainWnd();

	pMain->m_list.AddString(_T("���� ���� ���"));
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
