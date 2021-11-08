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
int SoSimple::simObjCnt = 0;

int main(void)
{
    cout << SoSimple::simObjCnt << "번 째 SoSimple 객체" << endl; // 객체 생성 전에도 static 멤버 접근으로 객체 내에 존재하지 않음을 증명
    SoSimple sim1;
    SoSimple sim2;

    cout << SoSimple::simObjCnt << "번 째 SoSimple 객체" << endl;
    cout << sim1.simObjCnt << "번 쨰 SoSimple 객체" << endl; // 객체를 통해서도 static 멤버변수 접근은 가능하다 일반 멤버변수에 접근하는 오해를 불러일으킬 수 있다
    cout << sim2.simObjCnt << "번 째 SoSimple 객체" << endl;
    return 0;
}

/*
0번 째 SoSimple 객체
2번 째 SoSimple 객체
2번 쨰 SoSimple 객체
2번 째 SoSimple 객체
*/