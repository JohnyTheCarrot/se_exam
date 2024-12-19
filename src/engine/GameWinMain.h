//-----------------------------------------------------------------
// Game Engine WinMain Function
// C++ Header - GameWinMain.h - version v8_01
//-----------------------------------------------------------------

#pragma once

//-----------------------------------------------------------------
// Include Files
//-----------------------------------------------------------------
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

//-----------------------------------------------------------------
// Windows Function Declarations
//-----------------------------------------------------------------
#ifdef UNICODE
#define WMAIN wWinMain
#else
#define WMAIN WinMain
#endif

int APIENTRY WMAIN(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPTSTR lpCmdLine, _In_ int nCmdShow);
