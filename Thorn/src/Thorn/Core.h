#pragma once
#ifdef TH_PLATFORM_WINDOWS
	#ifdef TH_BUILD_DLL
		#define THORN_API __declspec(dllexport)
	#else
		#define THORN_API __declspec(dllimport) 
	#endif
#else
	#error Thorn only supports Windows!
#endif

#define BIT(x) (1 << x)