// KeyInputView.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "final_20150291_2.h"
#include "KeyInputView.h"
#include "final_20150291_2Doc.h"
#include "KeyInputView2.h"
// CKeyInputView

IMPLEMENT_DYNCREATE(CKeyInputView, CView)

CKeyInputView::CKeyInputView()
{

}

CKeyInputView::~CKeyInputView()
{
}

BEGIN_MESSAGE_MAP(CKeyInputView, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()


// CKeyInputView 그리기입니다.

void CKeyInputView::OnDraw(CDC* pDC)
{
	Cfinal_20150291_2Doc* pDoc = (Cfinal_20150291_2Doc*)GetDocument();
	CFont font;
	font.CreatePointFont(150, _T("궁서"));
	pDC->SelectObject(&font);
	CRect rect;
	GetClientRect(&rect);
	pDC->DrawText(pDoc->m_str.GetData(), pDoc->m_str.GetSize(), &rect, DT_LEFT);

	// TODO: 여기에 그리기 코드를 추가합니다.
}


// CKeyInputView 진단입니다.

#ifdef _DEBUG
void CKeyInputView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CKeyInputView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CKeyInputView 메시지 처리기입니다.


void CKeyInputView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	Cfinal_20150291_2Doc* pDoc = (Cfinal_20150291_2Doc *)GetDocument();
	if (nChar == _T('\b'))
	{

		if (pDoc->m_str.GetSize() > 0)
			pDoc->m_str.RemoveAt(pDoc->m_str.GetSize() - 1);
	}
	else
	{
		pDoc->m_str.Add(nChar);
	}

	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CKeyInputView2* Doc = (CKeyInputView2*)GetDocument();
	Doc->Invalidate();
	Invalidate();


}
