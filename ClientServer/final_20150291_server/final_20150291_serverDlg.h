
// final_20150291_serverDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"
#include "ListenSocket.h"

// Cfinal_20150291_serverDlg ��ȭ ����
class Cfinal_20150291_serverDlg : public CDialogEx
{
// �����Դϴ�.
public:
	Cfinal_20150291_serverDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.
	CListenSocket* m_listen;
// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FINAL_20150291_SERVER_DIALOG };
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
	afx_msg void OnDestroy();
	CListBox m_york;
	CEdit m_edityork;
	int york;
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedDelete();
};
