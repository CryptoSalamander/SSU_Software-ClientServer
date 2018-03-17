#pragma once

// CListenSocket 명령 대상입니다.

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


