
// final_20150291_2View.cpp : Cfinal_20150291_2View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "final_20150291_2.h"
#endif

#include "final_20150291_2Doc.h"
#include "final_20150291_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cfinal_20150291_2View

IMPLEMENT_DYNCREATE(Cfinal_20150291_2View, CView)

BEGIN_MESSAGE_MAP(Cfinal_20150291_2View, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cfinal_20150291_2View ����/�Ҹ�

Cfinal_20150291_2View::Cfinal_20150291_2View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

Cfinal_20150291_2View::~Cfinal_20150291_2View()
{
}

BOOL Cfinal_20150291_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// Cfinal_20150291_2View �׸���

void Cfinal_20150291_2View::OnDraw(CDC* /*pDC*/)
{
	Cfinal_20150291_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// Cfinal_20150291_2View �μ�

BOOL Cfinal_20150291_2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void Cfinal_20150291_2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void Cfinal_20150291_2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// Cfinal_20150291_2View ����

#ifdef _DEBUG
void Cfinal_20150291_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cfinal_20150291_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cfinal_20150291_2Doc* Cfinal_20150291_2View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cfinal_20150291_2Doc)));
	return (Cfinal_20150291_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cfinal_20150291_2View �޽��� ó����
