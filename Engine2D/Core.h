#pragma once

#ifdef EN2D_PLATFORM_WINDOWS
	#ifdef EN2D_BUILD_DLL
		#define ENGINE2D_API __declspec(dllexport)
	#else
		#define ENGINE2D_API __declspec(dllimport)
	#endif // EN2D_BUILD_DLL
#else
	#error Engine2D only support Windows!
#endif // EN2D_PLATFORM_WINDOWS

