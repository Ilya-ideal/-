
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <tchar.h>
using namespace std;

int main()
{ 
    setlocale(LC_ALL, "Russian");
    long int a(9), b(5), c(0);
    c = a + b;
    cout << "Введите 1-е число" << endl;
    cin >> a;
    cout << "Введите 2-е число" << endl;
    cin >> b;
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

