// KeyInputDoc2.cpp : ���� �����Դϴ�.
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


// CKeyInputDoc2 �����Դϴ�.

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
// CKeyInputDoc2 serialization�Դϴ�.

void CKeyInputDoc2::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	}
	else
	{
		// TODO: ���⿡ �ε� �ڵ带 �߰��մϴ�.
	}
}
#endif


// CKeyInputDoc2 ����Դϴ�.
