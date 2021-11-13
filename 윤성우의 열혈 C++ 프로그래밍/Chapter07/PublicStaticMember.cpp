#include <iostream>
using namespace std;

class SoSimple
{
    public:
        static int simObjCnt;
    public: // 불필요하지만 변수와 함수의 구분을 목적으로 삽입하기도 함
        SoSimple()
        {
            simObjCnt++;
        }
};
int SoSimple::simObjCnt = 0; // static 변수의 초기화 방법, 객체가 생성될 때 동시에 생성되는 변수가 아니고 이미 메모리 공간에 할당이 이뤄지기에 외부에서 초기화

int main(void)
{
    cout << SoSimple::simObjCnt << "번 째 SoSimple 객체" << endl; // 0
    SoSimple sim1;
    SoSimple sim2;

    cout << SoSimple::simObjCnt << "번 쨰 SoSimple 객체" << endl; // 2
    cout << sim1.simObjCnt << "번 째 SoSimple 객체" << endl; // 2
    cout << sim2.simObjCnt << "번 째 SoSimple 객체" << endl; // 2
    return 0;
}

/*
0번 째 SoSimple 객체
2번 쨰 SoSimple 객체
2번 째 SoSimple 객체
2번 째 SoSimple 객체
*/