#include "stdafx.h"
#include "Testing.h"
#include "TestingDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

TestingApp theApp;

BEGIN_MESSAGE_MAP(TestingApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

TestingApp::TestingApp()
{
}

BOOL TestingApp::InitInstance()
{
	CWinApp::InitInstance();

	// Create the shell manager, in case the dialog contains
	// any shell tree view or shell list view controls.
	CShellManager sm;

	// Activate "Windows Native" visual manager for enabling themes in MFC controls
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	TestingDlg dlg; m_pMainWnd = &dlg;

	switch (dlg.DoModal())
	{
		case IDOK:
		{
			break;
		}
		case IDCANCEL:
		{
			break;
		}
		case -1:
		{
			TRACE(traceAppMsg, 0, "Warning: dialog creation failed, so application is terminating unexpectedly.\n");
			TRACE(traceAppMsg, 0, "Warning: if you are using MFC controls on the dialog, you cannot #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS.\n");
			break;
		}
	}

	return FALSE;
}

