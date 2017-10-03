// 简单MFC程序.h : main header file for the 简单MFC程序 application
//

#if !defined(AFX_MFC_H__76353A51_5844_4F6A_B812_2CF3E830B2D3__INCLUDED_)
#define AFX_MFC_H__76353A51_5844_4F6A_B812_2CF3E830B2D3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCApp:
// See 简单MFC程序.cpp for the implementation of this class
//

class CMFCApp : public CWinApp
{
public:
	CMFCApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFC_H__76353A51_5844_4F6A_B812_2CF3E830B2D3__INCLUDED_)
