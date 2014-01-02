// ChildView.cpp : implementation of the CChildView class
//

#include "stdafx.h"
#include "PoCG - Project for SoftServe.h"
#include "ChildView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()



// CChildView message handlers

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this);
	//centaral point
CRect dimensions;
GetClientRect(&dimensions);
CPoint cp = dimensions.CenterPoint();
CPoint p = cp;
	//sozdanie kistey i karandashey
CBrush lgreen;
lgreen.CreateSolidBrush(RGB(40,250,145));
CBrush swhite;
swhite.CreateSolidBrush(RGB(255,255,255));
CPen DPen;
DPen.CreatePen(PS_DASH,0.5,RGB(0,0,0));
CPen SPen;
SPen.CreatePen(PS_SOLID,0.5,RGB(0,0,0));
	//steklyannaya plastina
dc.SelectObject(lgreen);
CRect rc(cp.x+250,cp.y-600,cp.x+260,100);
dc.FillRect(&rc,&lgreen);
dc.SelectObject(DPen);
dc.Rectangle(cp.x+250,cp.y-600,cp.x+260,100);
	//plastina kotoraya visit ^_^
dc.SelectObject(SPen);
dc.SelectObject(swhite);
dc.Rectangle(cp.x+100,110,cp.x+400,100);
}