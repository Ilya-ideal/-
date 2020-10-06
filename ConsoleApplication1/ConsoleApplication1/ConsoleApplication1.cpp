
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <tchar.h>

using namespace std;

int main()
{ 
    setlocale(LC_ALL, "Russian");
    __int64 a(9), b(5), c(0);
    cout << sizeof(c) << endl;
    _asm
    {
        mov eax, a
        add eax, b
        mov c, eax
    }
    cout << "Ответ: " << c << endl;
    system("PAUSE");
    return 0;
}

