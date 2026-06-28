#pragma once
#include <windows.h>

#define MH_OK 0
typedef int MH_STATUS;

extern "C" {
    MH_STATUS __stdcall MH_Initialize(void);
    MH_STATUS __stdcall MH_Uninitialize(void);
    MH_STATUS __stdcall MH_CreateHook(void* pTarget, void* pDetour, void** ppOriginal);
    MH_STATUS __stdcall MH_EnableHook(void* pTarget);
    MH_STATUS __stdcall MH_DisableHook(void* pTarget);
}

