#pragma once

// CListenSocket ��� ����Դϴ�.

class CListenSocket : public CAsyncSocket
{
public:
	CListenSocket();
	virtual ~CListenSocket();
	CPtrList m_childlist;
	virtual void OnAccept(int nErrorCode);
	void CloseClientSocket(CSocket* pChild);
	void MultiCast(TCHAR* buffer);
};


