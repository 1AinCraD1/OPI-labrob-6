#include <iostream>
#include <iomanip>
#include "math.h"
using namespace std;
int main()
{
    int a, b;
    float h;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    cout << "Enter h = ";
    cin >> h;
    float y, x = a;
    while (x <= b)
    {
        y = std::log(x * x) + pow(x, 2) + 2;
        cout << setw(10) << "x=" << x << setw(10) << "y=" << y << endl;
        x += h;
    }
    system("pause");
    return 0;
}