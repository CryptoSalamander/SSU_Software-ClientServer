// KeyInputView.cpp : ���� �����Դϴ�.
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


// CKeyInputView �׸����Դϴ�.

void CKeyInputView::OnDraw(CDC* pDC)
{
	Cfinal_20150291_2Doc* pDoc = (Cfinal_20150291_2Doc*)GetDocument();
	CFont font;
	font.CreatePointFont(150, _T("�ü�"));
	pDC->SelectObject(&font);
	CRect rect;
	GetClientRect(&rect);
	pDC->DrawText(pDoc->m_str.GetData(), pDoc->m_str.GetSize(), &rect, DT_LEFT);

	// TODO: ���⿡ �׸��� �ڵ带 �߰��մϴ�.
}


// CKeyInputView �����Դϴ�.

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


// CKeyInputView �޽��� ó�����Դϴ�.


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

	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	CKeyInputView2* Doc = (CKeyInputView2*)GetDocument();
	Doc->Invalidate();
	Invalidate();


}
