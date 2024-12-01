#include <stdio.h>
#include <windows.h>

/*
Reference:
https://codereview.stackexchange.com/questions/46980/windows-keyprintfger-in-c
*/

void handle_keys(DWORD vkCode){
    switch (vkCode)
            {
            case VK_BACK:
                printf("[BACKSPACE]");
                break;
            case VK_RETURN:
                printf("[ENTER]");
                break;
            case VK_LSHIFT:
                printf("[LSHIFT]");
                break;
            case VK_RSHIFT:
                printf("[RSHIFT]");
                break;
            case VK_DIVIDE:
                printf("[/]");
                break;
            case VK_MULTIPLY:
                printf("[*]");
                break;
            case VK_SUBTRACT:
                printf("[-]");
                break;
            case VK_ADD:
                printf("[+]");
                break;
            case VK_PRIOR:
                printf("[PageUp]");
                break;
            case VK_NEXT:
                printf("[PageDown]");
                break;
            case VK_LEFT:
                printf("[LArrow]");
                break;
            case VK_RIGHT:
                printf("[RArrow]");
                break;
            case VK_UP:
                printf("[UpArrow]");
                break;
            case VK_DOWN:
                printf("[DownArrow]");
                break;
            case VK_NUMPAD0:
                printf("[0]");
                break;
            case VK_NUMPAD1:
                printf("[1]");
                break;
            case VK_NUMPAD2:
                printf("[2]");
                break;
            case VK_NUMPAD3:
                printf("[3]");
                break;
            case VK_NUMPAD4:
                printf("[4]");
                break;
            case VK_NUMPAD5:
                printf("[5]");
                break;
            case VK_NUMPAD6:
                printf("[6]");
                break;
            case VK_NUMPAD7:
                printf("[7]");
                break;
            case VK_NUMPAD8:
                printf("[8]");
                break;
            case VK_NUMPAD9:
                printf("[9]");
                break;
            case VK_F1:
                printf("[F1]");
                break;
            case VK_F2:
                printf("[F2]");
                break;
            case VK_F3:
                printf("[F3]");
                break;
            case VK_F4:
                printf("[F4]");
                break;
            case VK_F5:
                printf("[F5]");
                break;
            case VK_F6:
                printf("[F6]");
                break;
            case VK_F7:
                printf("[F7]");
                break;
            case VK_F8:
                printf("[F8]");
                break;
            case VK_F9:
                printf("[F9]");
                break;
            case VK_F10:
                printf("[F10]");
                break;
            case VK_F11:
                printf("[F11]");
                break;
            case VK_F12:
                printf("[F12]");
                break;
            case VK_F13:
                printf("[F13]");
                break;
            case VK_F14:
                printf("[F14]");
                break;
            case VK_F15:
                printf("[F15]");
                break;
            case VK_F16:
                printf("[F16]");
                break;
            case VK_F17:
                printf("[F17]");
                break;
            case VK_F18:
                printf("[F18]");
                break;
            case VK_F19:
                printf("[F19]");
                break;
            case VK_F20:
                printf("[F20]");
                break;
            case VK_F21:
                printf("[F21]");
                break;
            case VK_F22:
                printf("[F22]");
                break;
            case VK_F23:
                printf("[F23]");
                break;
            case VK_F24:
                printf("[F24]");
                break;
            default:
                printf("%c", (char)vkCode);
                break;
            }
}