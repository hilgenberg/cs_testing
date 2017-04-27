#pragma once
#include "res/resource.h"

class TestingApp : public CWinApp
{
public:
	TestingApp();
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

extern TestingApp theApp;