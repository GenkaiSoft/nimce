#include <windows.h>

typedef int (*ProcMsgBox)(LPCWSTR , LPCWSTR);

int main()
{
    HMODULE dll = LoadLibraryW(L"dll.dll");
    ProcMsgBox proc = reinterpret_cast<ProcMsgBox>(GetProcAddressW(dll , L"MsgBox"));
    proc(L"DLL_TEST" , L"TEST");
    FreeLibrary(dll);
    return 0;
}