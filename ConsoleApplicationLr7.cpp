#include <iostream>
#include "math.h"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введіть довжину в см - ";
    double a;
    cin >> a;
    cout << "Довжина в м - ";
    cout << int(a) / 100;
}
