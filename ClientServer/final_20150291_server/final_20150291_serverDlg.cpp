
// final_20150291_serverDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "final_20150291_server.h"
#include "final_20150291_serverDlg.h"
#include "afxdialogex.h"
#include "ChildSocket.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cfinal_20150291_serverDlg 대화 상자



Cfinal_20150291_serverDlg::Cfinal_20150291_serverDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_FINAL_20150291_SERVER_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cfinal_20150291_serverDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Control(pDX, IDC_LIST2, m_york);
	DDX_Control(pDX, IDC_EDIT1, m_edityork);
}

BEGIN_MESSAGE_MAP(Cfinal_20150291_serverDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_DESTROY()
	ON_BN_CLICKED(IDC_ADD, &Cfinal_20150291_serverDlg::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_DELETE, &Cfinal_20150291_serverDlg::OnBnClickedDelete)
END_MESSAGE_MAP()


// Cfinal_20150291_serverDlg 메시지 처리기

BOOL Cfinal_20150291_serverDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.
	york = 0;
	// TODO: 여기에 추가 초기화 작업을 추가합니다.
	m_listen = new CListenSocket;
	if (m_listen->Create(5555, SOCK_STREAM))
	{
		if (!m_listen->Listen())
			AfxMessageBox(_T("리슨 실패"));

	}
	else
		AfxMessageBox(_T("소켓 생성 실패"));
	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void Cfinal_20150291_serverDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void Cfinal_20150291_serverDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR Cfinal_20150291_serverDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Cfinal_20150291_serverDlg::OnDestroy()
{
	CDialogEx::OnDestroy();
	POSITION pos;
	pos = m_listen->m_childlist.GetHeadPosition();
	CChildSocket* pChild = NULL;

	while (pos != NULL)
	{
		pChild = (CChildSocket*)m_listen->m_childlist.GetNext(pos);
		if (pChild != NULL)
		{
			pChild->ShutDown();
			pChild->Close();
			delete pChild;
		}
	}
	m_listen->ShutDown();
	m_listen->Close();
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
}


void Cfinal_20150291_serverDlg::OnBnClickedAdd()
{
	CString str;
	m_edityork.GetWindowText(str);
	m_york.AddString(str);
	york++;
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void Cfinal_20150291_serverDlg::OnBnClickedDelete()
{
	int index = m_york.GetCurSel();
	m_york.DeleteString(index);
	york--;
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
