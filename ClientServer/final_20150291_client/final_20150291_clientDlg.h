
// final_20150291_clientDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"
#include "ClientSocket.h"

// Cfinal_20150291_clientDlg ��ȭ ����
class Cfinal_20150291_clientDlg : public CDialogEx
{
// �����Դϴ�.
public:
	Cfinal_20150291_clientDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FINAL_20150291_CLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox m_list;
	CString m_data;
	CButton m_send;
	CButton m_connect;
	CClientSocket m_client;
	afx_msg void OnBnClickedButtonConnect();
	afx_msg void OnBnClickedButtonSend();
};
