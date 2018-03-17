
// final_20150291_serverDlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"
#include "ListenSocket.h"

// Cfinal_20150291_serverDlg 대화 상자
class Cfinal_20150291_serverDlg : public CDialogEx
{
// 생성입니다.
public:
	Cfinal_20150291_serverDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.
	CListenSocket* m_listen;
// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FINAL_20150291_SERVER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
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
