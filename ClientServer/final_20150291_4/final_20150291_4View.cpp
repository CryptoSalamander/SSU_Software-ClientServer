
// final_20150291_4View.cpp : Cfinal_20150291_4View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "final_20150291_4.h"
#endif

#include "final_20150291_4Doc.h"
#include "final_20150291_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cfinal_20150291_4View

IMPLEMENT_DYNCREATE(Cfinal_20150291_4View, CFormView)

BEGIN_MESSAGE_MAP(Cfinal_20150291_4View, CFormView)
END_MESSAGE_MAP()

// Cfinal_20150291_4View ����/�Ҹ�

Cfinal_20150291_4View::Cfinal_20150291_4View()
	: CFormView(IDD_FINAL_20150291_4_FORM)
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

Cfinal_20150291_4View::~Cfinal_20150291_4View()
{
}

void Cfinal_20150291_4View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL Cfinal_20150291_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CFormView::PreCreateWindow(cs);
}

void Cfinal_20150291_4View::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}


// Cfinal_20150291_4View ����

#ifdef _DEBUG
void Cfinal_20150291_4View::AssertValid() const
{
	CFormView::AssertValid();
}

void Cfinal_20150291_4View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

Cfinal_20150291_4Doc* Cfinal_20150291_4View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cfinal_20150291_4Doc)));
	return (Cfinal_20150291_4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cfinal_20150291_4View �޽��� ó����
