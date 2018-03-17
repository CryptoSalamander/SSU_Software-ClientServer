// KeyInputDoc2.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "final_20150291_2.h"
#include "KeyInputDoc2.h"


// CKeyInputDoc2

IMPLEMENT_DYNCREATE(CKeyInputDoc2, CDocument)

CKeyInputDoc2::CKeyInputDoc2()
{
}

BOOL CKeyInputDoc2::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

CKeyInputDoc2::~CKeyInputDoc2()
{
}


BEGIN_MESSAGE_MAP(CKeyInputDoc2, CDocument)
END_MESSAGE_MAP()


// CKeyInputDoc2 진단입니다.

#ifdef _DEBUG
void CKeyInputDoc2::AssertValid() const
{
	CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CKeyInputDoc2::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CKeyInputDoc2 serialization입니다.

void CKeyInputDoc2::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 여기에 저장 코드를 추가합니다.
	}
	else
	{
		// TODO: 여기에 로딩 코드를 추가합니다.
	}
}
#endif


// CKeyInputDoc2 명령입니다.
