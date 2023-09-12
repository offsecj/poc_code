#include <windows.h>
#pragma comment (lib, "user32.lib")

//DLL Hijacking PoC. Will pop up MessageBox if DLL is loaded and break for anything else

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {

    switch (ul_reason_for_call) {

        case DLL_PROCESS_ATTACH:
            MessageBox(
                NULL,
                "dll hijacking POC",
                "Exploited",
                MB_OK
            );
            break;

        case DLL_PROCESS_DETACH:
            break;

        case DLL_THREAD_ATTACH:
            break;

        case DLL_THREAD_DETACH:
            break;    
    }

    return TRUE;
}