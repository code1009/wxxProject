//////////////////////////////////////////////////////////////////////////////////
//===========================================================================
#include "stdafx.h"

//===========================================================================
#include <res/resource.h>

//===========================================================================
#include "MyWinApp.hpp"





/////////////////////////////////////////////////////////////////////////////
//===========================================================================
CMyWinApp::CMyWinApp()
{
}

CMyWinApp::~CMyWinApp()
{
}

//===========================================================================
BOOL CMyWinApp::InitInstance()
{
	//Create the Frame Window
	m_MainFrame.Create(); // throws a CWinException on failure    

	return TRUE;
}


