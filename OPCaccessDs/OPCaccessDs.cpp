// OPCaccessDs.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "OPCaccessDs.h"
#include "OPCaccessDsDlg.h"

#include <Tango.h>
#include <OPCaccess.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COPCaccessDsApp

BEGIN_MESSAGE_MAP(COPCaccessDsApp, CWinApp)
	//{{AFX_MSG_MAP(COPCaccessDsApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COPCaccessDsApp construction

COPCaccessDsApp::COPCaccessDsApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only COPCaccessDsApp object

COPCaccessDsApp theApp;

/////////////////////////////////////////////////////////////////////////////
// COPCaccessDsApp initialization

BOOL COPCaccessDsApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

	static const char *revision = "$Revision: 1.1.1.1 $";
	
	Tango::Util		*tg;
	try
	{
		m_nCmdShow = SW_SHOWMINIMIZED;
		tg = Tango::Util::init (m_hInstance, m_nCmdShow);

		tg->set_server_version (revision);
		stringstream str;
		str << "OPC Access Server" << endl;
		str << revision << endl << endl;
		str << "JM - SEG - ESRF" << ends;
		string s(str.str());
		tg->set_main_window_text (s);

		tg->server_init(true);
		tg->set_serial_model(Tango::BY_CLASS);

		tg->server_run();;
	}

	catch (bad_alloc)
	{
		MessageBox ((HWND)NULL, "Can`t allocate memory to store device object!\n",
			         "Command line ", MB_ICONSTOP);
		return FALSE;
	}

	catch (CORBA::Exception &)
	{
		MessageBox ((HWND)NULL, "Received a CORBA_Exception\n",
			         "Command line ", MB_ICONSTOP);
		return FALSE;
	}

	m_pMainWnd = new CWnd;
	m_pMainWnd->Attach (tg->get_ds_main_window());

	return TRUE;
}
