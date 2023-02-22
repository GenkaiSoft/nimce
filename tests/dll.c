#include <tchar.h>
#include <windows.h>

void MsgBox(LPCWSTR lpStrText , LPCWSTR lpStrTitle)
{
    MessageBox(NULL , lpStrText , lpStrTitle , MB_OK);
}