// KeyInputView2.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "final_20150291_2.h"
#include "KeyInputView2.h"
#include "final_20150291_2Doc.h"

// CKeyInputView2

IMPLEMENT_DYNCREATE(CKeyInputView2, CView)

CKeyInputView2::CKeyInputView2()
{

}

CKeyInputView2::~CKeyInputView2()
{
}

BEGIN_MESSAGE_MAP(CKeyInputView2, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()


// CKeyInputView2 그리기입니다.

void CKeyInputView2::OnDraw(CDC* pDC)
{
	Cfinal_20150291_2Doc* pDoc = (Cfinal_20150291_2Doc*)GetDocument();
	CFont font;
	font.CreatePointFont(1000, _T("궁서"));
	pDC->SelectObject(&font);
	CRect rect;
	GetClientRect(&rect);
	pDC->DrawText(pDoc->m_str.GetData(), pDoc->m_str.GetSize(), &rect, DT_LEFT);
	// TODO: 여기에 그리기 코드를 추가합니다.
}


// CKeyInputView2 진단입니다.

#ifdef _DEBUG
void CKeyInputView2::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CKeyInputView2::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CKeyInputView2 메시지 처리기입니다.


void CKeyInputView2::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	
}
