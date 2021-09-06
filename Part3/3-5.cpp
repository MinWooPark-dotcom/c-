#include <iostream>
using namespace std;
void SwapValues(int &x, int &y);

int main()
{
    int a, b;

    cout << "Enter two numbers :";
    cin >> a >> b;
    if (a < b)
        SwapValues(a, b);
    cout << "A larger number = " << a << "A smaller number = " << b << endl;
    return 0;
}

void SwapValues(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}