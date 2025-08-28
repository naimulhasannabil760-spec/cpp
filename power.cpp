#include <iostream>
using namespace std;

// User-defined function to calculate power
double power(double base, int exponent)
{
    double result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    double x;
    int y;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (y): ";
    cin >> y;

    cout << x << "^" << y << " = " << power(x, y) << endl;

    return 0;
}
