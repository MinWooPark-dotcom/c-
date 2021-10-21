#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 1020;
    int &num2 = num1; // num2라는 참조자 선언, 참조자란 변수에 별칭을 하나 붙여주는 것

    num2 = 3047;
    cout << "VAL: " << num1 << endl;
    cout << "REF: " << num2 << endl;

    cout << "VAL: " << &num1 << endl;
    cout << "REF: " << &num2 << endl;
    return 0;
}

/*
VAL: 3047
REF: 3047
VAL: 0x7ffeef9bd2f8
REF: 0x7ffeef9bd2f8
*/