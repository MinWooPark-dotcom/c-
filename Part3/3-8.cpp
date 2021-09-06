#include <iostream>
#include <cmath>
using namespace std;
double Round(double x, int d = 0); // Default parameter

int main()
{
    double a;
    cout << "Value = ";
    cin >> a;
    cout << "Round-off --> " << Round(a) << endl;
    cout << "   " << Round(a, 1) << endl;
    cout << "   " << Round(a, 2) << endl;
    cout << "   " << Round(a, 3) << endl;
    return 0;
}

// Rounding function
// Argument 
// - double x: Value to round 
// - int d: Number of decimal places to be rounded
// Retunr: Rounded value(double)
double Round(double x, int d)
{
    double a = x >= 0 ? 0.5 : -0.5;
    double pow10 = pow(10, d);
    return trunc(x * pow10 + a) / pow10;
}
