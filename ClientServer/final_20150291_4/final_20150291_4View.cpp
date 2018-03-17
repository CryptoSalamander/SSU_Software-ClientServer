
// final_20150291_4View.cpp : Cfinal_20150291_4View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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

// Cfinal_20150291_4View 생성/소멸

Cfinal_20150291_4View::Cfinal_20150291_4View()
	: CFormView(IDD_FINAL_20150291_4_FORM)
{
	// TODO: 여기에 생성 코드를 추가합니다.

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
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CFormView::PreCreateWindow(cs);
}

void Cfinal_20150291_4View::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}


// Cfinal_20150291_4View 진단

#ifdef _DEBUG
void Cfinal_20150291_4View::AssertValid() const
{
	CFormView::AssertValid();
}

void Cfinal_20150291_4View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

Cfinal_20150291_4Doc* Cfinal_20150291_4View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cfinal_20150291_4Doc)));
	return (Cfinal_20150291_4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cfinal_20150291_4View 메시지 처리기
