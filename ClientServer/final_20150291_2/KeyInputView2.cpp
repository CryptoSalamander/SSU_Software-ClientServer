// KeyInputView2.cpp : ���� �����Դϴ�.
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


// CKeyInputView2 �׸����Դϴ�.

void CKeyInputView2::OnDraw(CDC* pDC)
{
	Cfinal_20150291_2Doc* pDoc = (Cfinal_20150291_2Doc*)GetDocument();
	CFont font;
	font.CreatePointFont(1000, _T("�ü�"));
	pDC->SelectObject(&font);
	CRect rect;
	GetClientRect(&rect);
	pDC->DrawText(pDoc->m_str.GetData(), pDoc->m_str.GetSize(), &rect, DT_LEFT);
	// TODO: ���⿡ �׸��� �ڵ带 �߰��մϴ�.
}


// CKeyInputView2 �����Դϴ�.

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


// CKeyInputView2 �޽��� ó�����Դϴ�.


void CKeyInputView2::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.

	
}
