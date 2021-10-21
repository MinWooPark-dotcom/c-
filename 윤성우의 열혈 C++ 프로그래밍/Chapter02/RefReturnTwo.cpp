#include <iostream>
using namespace std;

int& RefRetFuncOne(int &ref)
{
    ref++;
    return ref; 
}

int main(void)
{
    int num1 = 1;
    int num2 = RefRetFuncOne(num1); // RefRetFuncOne 함수는 참조형으로 반환되지만, 참조자가 아닌 일반 변수를 선언해서 반환 값을 저장할 수 도 있음. num1과 num2는 완전 별개의 변수임.

    num1 += 1;
    num2 += 100;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    return 0;
}

/*
num1: 3
num2: 102
*/