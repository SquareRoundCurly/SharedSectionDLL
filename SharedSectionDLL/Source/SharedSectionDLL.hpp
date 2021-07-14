#pragma once

#ifdef SharedSectionDLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

extern "C" DLL_API int Get();
extern "C" DLL_API void Set(int value);

