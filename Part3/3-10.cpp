#include <iostream>
using namespace std;

inline void SwapValues(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a< b)
        SwapValues(a, b);
    cout << "A larger number = " << a << endl << "A smaller number = " << b << endl;
    return 0;
}