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

#ifdef TH_ENABLE_ASSERTS
	#define TH_ASSERT(x, ...) { if(!(x)) { TH_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define TH_CORE_ASSERT(x, ...) { if(!(x)) { TH_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define TH_ASSERT(x, ...)
#define TH_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)