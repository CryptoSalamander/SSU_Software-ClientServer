#pragma once

// CChildSocket ��� ����Դϴ�.
class CListenSocket;
class CChildSocket : public CSocket
{
public:
	CChildSocket();
	virtual ~CChildSocket();
	CListenSocket* m_listensocket;
	void SetListenSocket(CListenSocket* pSocket);
	virtual void OnClose(int nErrorCode);
	virtual void OnReceive(int nErrorCode);
};


