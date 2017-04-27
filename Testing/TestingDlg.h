#pragma once

class TestingDlg : public CDialogEx
{
public:
	TestingDlg(CWnd *parent = NULL);

	virtual void DoDataExchange(CDataExchange *dx);
	virtual BOOL OnInitDialog();
	void OnPaint();
	HCURSOR OnQueryDragIcon();
	void OnBnClickedButton1();

private:
	HICON icon;
	DECLARE_MESSAGE_MAP()
};
