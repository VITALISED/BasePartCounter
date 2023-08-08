// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

DWORD WINAPI MainThread(LPVOID lpReserved)
{
    Sleep(30000); // Legendarily hacky but im too lazy to do any GcApplication state stuff
    AllocConsole();
    uintptr_t addr = (uintptr_t)SIGSCAN("0F 84 ? ? ? ? 48 8B 0D ? ? ? ? 48 85 C9 74 05") - 0x387;
    if (addr)
    {
        uint8_t bytes[6] = { 0x0F, 0x8D, 0x3E, 0x02, 0x00, 0x00 };
        Memory::PatchBytes(addr, bytes);
    }
    spdlog::info("{0:x}", addr);
    spdlog::info("{0:x}", (uintptr_t)GetModuleHandleA(NULL));
    return TRUE;
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
         CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

