#include "stdafx.h"
#include "Testing.h"
#include "TestingDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

TestingDlg::TestingDlg(CWnd *parent)
: CDialogEx(IDD_TESTING_DIALOG, parent)
{
	icon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void TestingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(TestingDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnBnClickedButton1)
END_MESSAGE_MAP()

BOOL TestingDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	SetIcon(icon, TRUE);  // Set big icon
	SetIcon(icon, FALSE); // Set small icon

	return TRUE;
}

void TestingDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this);

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int w = GetSystemMetrics(SM_CXICON);
		int h = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - w + 1) / 2;
		int y = (rect.Height() - h + 1) / 2;
		dc.DrawIcon(x, y, icon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

HCURSOR TestingDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(icon);
}

void TestingDlg::OnBnClickedButton1()
{
	MessageBox(_T("Hello."), _T("Whatever"), MB_OK);
}
