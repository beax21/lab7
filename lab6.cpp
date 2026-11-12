#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, a, b, c;
    double f;
    cout << "Введіть х: ";
    cin >> x;
    cout << "Введіть а: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть c: ";
    cin >> c;
    if (c < 0 && a != 0) f = -a * x * x * x - b / c;
    else if (c > 0 && a == 0) f = x - a * a * a / -c;
    else f = (a * x + 5 * b);
    cout << setw(8) << setprecision(3) << "F=" << f << endl;

}
