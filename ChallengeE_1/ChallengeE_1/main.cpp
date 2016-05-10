/******************************************************************/
/*!
	Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>

	\file    Main.cpp
	\author  John Salguero
	\date    May 09, 2016
	\brief
		This cpp file is the entry to the First Easy Challenge of Daily Programmer
		it starts the loop.
*/
/********************************************************************/
#include "stdafx.h"

/******************************************************************************/
/*!
					UseConsole WINDOWS BASED

\author   John Salguero

\brief    Creates a console for everyone to use
           
\return   void

*/
/******************************************************************************/
void UseConsole()
{

}


/******************************************************************************/
/*!

					WinMain

\brief		The entry to the program. It starts the main loop.

\param		hInstance
					A handle to the current instance of the application.

\param		hPrevInstance
					A handle to the previous instance of the application. This parameter is always NULL.

\param		lpCmdLine
					The command line for the application

\param		nCmdShow
					Controls how the window is to be shown.

\return		Engine::Release - whether or not the engine released properly
           
*/
/******************************************************************************/
INT32 __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT32 nCmdShow)
{
#ifdef _DEBUG
	UseConsole();
#endif

	return -1;
}
