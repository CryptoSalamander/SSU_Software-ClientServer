
// final_20150291_2View.h : Cfinal_20150291_2View Ŭ������ �������̽�
//

#pragma once


class Cfinal_20150291_2View : public CView
{
protected: // serialization������ ��������ϴ�.
	Cfinal_20150291_2View();
	DECLARE_DYNCREATE(Cfinal_20150291_2View)

// Ư���Դϴ�.
public:
	Cfinal_20150291_2Doc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~Cfinal_20150291_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // final_20150291_2View.cpp�� ����� ����
inline Cfinal_20150291_2Doc* Cfinal_20150291_2View::GetDocument() const
   { return reinterpret_cast<Cfinal_20150291_2Doc*>(m_pDocument); }
#endif

