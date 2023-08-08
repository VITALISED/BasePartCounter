// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    uintptr_t addr = (uintptr_t)SIGSCAN(0F 8E 3E 02 00 00);

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        Memory::PatchBytes(addr, "0F 8D 3E 02 00 00");
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

