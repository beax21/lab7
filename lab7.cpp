#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b;
    float h = 0.1;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    float y, x = 1;
    do
    {
        y = a * b + sin(x) * sin(x) - x * x;
        cout << setw(10) << "x=" << x
            << setw(10) << "y=" << y << endl;
        x += h;
    } while (x <= 2);
}
// з роботи 8