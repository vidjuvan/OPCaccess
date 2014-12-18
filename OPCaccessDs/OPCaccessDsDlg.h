// OPCaccessDsDlg.h : header file
//

#if !defined(AFX_OPCACCESSDSDLG_H__918775D9_763F_43FE_B83C_CB1083008740__INCLUDED_)
#define AFX_OPCACCESSDSDLG_H__918775D9_763F_43FE_B83C_CB1083008740__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// COPCaccessDsDlg dialog

class COPCaccessDsDlg : public CDialog
{
// Construction
public:
	COPCaccessDsDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(COPCaccessDsDlg)
	enum { IDD = IDD_OPCACCESSDS_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COPCaccessDsDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(COPCaccessDsDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OPCACCESSDSDLG_H__918775D9_763F_43FE_B83C_CB1083008740__INCLUDED_)
