
// final_20150291_4View.h : Cfinal_20150291_4View Ŭ������ �������̽�
//

#pragma once


class Cfinal_20150291_4View : public CFormView
{
protected: // serialization������ ��������ϴ�.
	Cfinal_20150291_4View();
	DECLARE_DYNCREATE(Cfinal_20150291_4View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_FINAL_20150291_4_FORM };
#endif

// Ư���Դϴ�.
public:
	Cfinal_20150291_4Doc* GetDocument() const;
	CButton m_man;
	CButton m_woman;
	CButton m_adult;
	CButton m_teen;
// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	virtual void OnInitialUpdate(); // ���� �� ó�� ȣ��Ǿ����ϴ�.

// �����Դϴ�.
public:
	virtual ~Cfinal_20150291_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // final_20150291_4View.cpp�� ����� ����
inline Cfinal_20150291_4Doc* Cfinal_20150291_4View::GetDocument() const
   { return reinterpret_cast<Cfinal_20150291_4Doc*>(m_pDocument); }
#endif

