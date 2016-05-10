/******************************************************************/
/*!
  Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>

  \file    stdafx.h
  \author  John Salguero
  \date    May 09, 2016
  \brief
    This is our header file including all precompiled code - you should include only
    those that change infrequently and or are widely used.
*/
/********************************************************************/
#ifndef Precompiled_H
#define Precompiled_H

// System stuff
#	if defined(_WIN32)
#		define WIN32_LEAN_AND_MEAN
#		include <Windows.h>
#	endif  // END WINDOWS

#include <io.h>      /* _open_osfhandle (for the console) */
#include <Fcntl.h>   /* _O_TEXT (for the console) */

// SDL Library
#include "SDL.h"     /* ALL stuff standard for SDL 2.0 */

#endif