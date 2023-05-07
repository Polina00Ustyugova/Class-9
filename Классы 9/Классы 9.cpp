#include "List.h"
#include "Error.h"
#include <iostream>
#include <exception>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    int n, m;
    try 
    {
        cout << "Введите размер списка a: ";
        cin >> n;
        cout << "Введите размер списка b: ";
        cin >> m;
        List a(n);
        List b(m);
        cout << "a: " << a;
        cout << "Элемент 5 списка a: " << a[5] << endl;
        cout << "b: " << b;
        cout << "Произведение элементов списка a на элементы списка b" << endl;
        List c = a * b; 
        cout << "c: " << c;
        cout << "Перемещение по списку b на 5 и на 6 элементов" << endl;
        cout << b + 5 << endl;
        cout << b + 6;  
    }
    catch (Error& e) 
    {
        e.what();
    }
    catch (...) 
    {
        cout << "Неизвестная ошибка!" << endl;
    }
    return 0;
}