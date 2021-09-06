#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr;

    ptr = &a;
    cout << "Value indicated by ptr:  " << *ptr << endl;
    *ptr = 20;
    cout << "Value of variable a: " << a << endl;
    return 0;
}