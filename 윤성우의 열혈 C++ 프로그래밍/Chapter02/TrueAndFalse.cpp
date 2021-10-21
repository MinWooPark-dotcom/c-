#include <iostream>
using namespace std;

int main(void)
{
    int num = 10;
    int i = 0;

    cout << "true: " << true << endl;
    cout << "false: " << false << endl;
    
    while (true)
    {
        cout << i++ << " "; // 
        if (i>num)
            break;
    }
    cout << endl;

    cout << "sizeof 1: " << sizeof(1) << endl;
    cout << "sizeof 0: " << sizeof(0) << endl;
    cout << "sizeof true: " << sizeof(true) << endl;
    cout << "sizeof false: " << sizeof(false) << endl;
    return 0;
}

/*
true: 1
false: 0
0 1 2 3 4 5 6 7 8 9 10 
sizeof 1: 4
sizeof 0: 4
sizeof true: 1
sizeof false: 1

주의할 점은 trues는 1이 아니며, false 역시 0이 아니다.
'참'과 '거짓'을 표현하기 위한 1바이트 크기의 데이터일 뿐이다.
출력하거나 정수의 형태로 형 변환하는 경우에 각각 1과 0으로 변환되도록 정의되어 있을 뿐이다.
*/
