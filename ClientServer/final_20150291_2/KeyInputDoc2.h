#pragma once

// CKeyInputDoc2 �����Դϴ�.

class CKeyInputDoc2 : public CDocument
{
	DECLARE_DYNCREATE(CKeyInputDoc2)

public:
	CKeyInputDoc2();
	virtual ~CKeyInputDoc2();
#ifndef _WIN32_WCE
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual BOOL OnNewDocument();

	DECLARE_MESSAGE_MAP()
};
