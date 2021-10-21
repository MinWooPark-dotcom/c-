#include <iostream>
using namespace std;
void SwapByRef2(int &ref1, int &ref2) // 참조자는 선언과 동시에 변수로 초기화되어야 하지만 매개변수는 함수가 호출이 되어야 초기화가 진행되는 변수다. 그러므로 함수 호출 시 전달되는 인자로 초기화 하겠다는 의미
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main(void)
{
    int val1 = 10;
    int val2 = 20;

    SwapByRef2(val1, val2);
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;
    return 0;
}

/*
val1: 20
val2: 10
*/