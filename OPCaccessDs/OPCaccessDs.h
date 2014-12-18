// OPCaccessDs.h : main header file for the OPCACCESSDS application
//

#if !defined(AFX_OPCACCESSDS_H__9AED5ABF_90CE_447C_9CBD_FAAF6C4CAD76__INCLUDED_)
#define AFX_OPCACCESSDS_H__9AED5ABF_90CE_447C_9CBD_FAAF6C4CAD76__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// COPCaccessDsApp:
// See OPCaccessDs.cpp for the implementation of this class
//

class COPCaccessDsApp : public CWinApp
{
public:
	COPCaccessDsApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COPCaccessDsApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(COPCaccessDsApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OPCACCESSDS_H__9AED5ABF_90CE_447C_9CBD_FAAF6C4CAD76__INCLUDED_)
