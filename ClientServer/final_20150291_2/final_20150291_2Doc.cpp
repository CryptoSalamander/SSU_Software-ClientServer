
// final_20150291_2Doc.cpp : Cfinal_20150291_2Doc Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "final_20150291_2.h"
#endif

#include "final_20150291_2Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Cfinal_20150291_2Doc

IMPLEMENT_DYNCREATE(Cfinal_20150291_2Doc, CDocument)

BEGIN_MESSAGE_MAP(Cfinal_20150291_2Doc, CDocument)
END_MESSAGE_MAP()


// Cfinal_20150291_2Doc ����/�Ҹ�

Cfinal_20150291_2Doc::Cfinal_20150291_2Doc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

Cfinal_20150291_2Doc::~Cfinal_20150291_2Doc()
{
}

BOOL Cfinal_20150291_2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	m_str.RemoveAll();
	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// Cfinal_20150291_2Doc serialization

void Cfinal_20150291_2Doc::Serialize(CArchive& ar)
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

#ifdef SHARED_HANDLERS

// ����� �׸��� �����մϴ�.
void Cfinal_20150291_2Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// ������ �����͸� �׸����� �� �ڵ带 �����Ͻʽÿ�.
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// �˻� ó���⸦ �����մϴ�.
void Cfinal_20150291_2Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ������ �����Ϳ��� �˻� �������� �����մϴ�.
	// ������ �κ��� ";"�� ���еǾ�� �մϴ�.

	// ��: strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void Cfinal_20150291_2Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// Cfinal_20150291_2Doc ����

#ifdef _DEBUG
void Cfinal_20150291_2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void Cfinal_20150291_2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Cfinal_20150291_2Doc ���
