
// final_20150291_2Doc.h : Cfinal_20150291_2Doc Ŭ������ �������̽�
//


#pragma once


class Cfinal_20150291_2Doc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	Cfinal_20150291_2Doc();
	DECLARE_DYNCREATE(Cfinal_20150291_2Doc)

// Ư���Դϴ�.
public:
	CArray<TCHAR, TCHAR> m_str;
// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// �����Դϴ�.
public:
	virtual ~Cfinal_20150291_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// �˻� ó���⿡ ���� �˻� �������� �����ϴ� ����� �Լ�
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
