
// final_20150291_4View.h : Cfinal_20150291_4View 클래스의 인터페이스
//

#pragma once


class Cfinal_20150291_4View : public CFormView
{
protected: // serialization에서만 만들어집니다.
	Cfinal_20150291_4View();
	DECLARE_DYNCREATE(Cfinal_20150291_4View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_FINAL_20150291_4_FORM };
#endif

// 특성입니다.
public:
	Cfinal_20150291_4Doc* GetDocument() const;
	CButton m_man;
	CButton m_woman;
	CButton m_adult;
	CButton m_teen;
// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	virtual void OnInitialUpdate(); // 생성 후 처음 호출되었습니다.

// 구현입니다.
public:
	virtual ~Cfinal_20150291_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // final_20150291_4View.cpp의 디버그 버전
inline Cfinal_20150291_4Doc* Cfinal_20150291_4View::GetDocument() const
   { return reinterpret_cast<Cfinal_20150291_4Doc*>(m_pDocument); }
#endif

