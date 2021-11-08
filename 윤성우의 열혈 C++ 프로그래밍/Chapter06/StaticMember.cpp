#include <iostream>
using namespace std;

class SoSimple
{
    private:
        static int simObjCnt; // SoSimple 객체에 의해서 공유
    public:
        SoSimple()
        {
            simObjCnt++; // SoSimple 멤버함수 내에서 멤버변수 처럼 접근 가능하지만 멤버변수가 아니라 static 변수임
            cout << simObjCnt << "번 째 SoSimple 객체" << endl;
        }
};
int SoSimple::simObjCnt = 0; // 클래스 외부에서 초기화

class SoComplex
{
    private:
        static int cmxObjCnt;
    public:
        SoComplex()
        {
            cmxObjCnt++;
            cout << cmxObjCnt << "번 째 SoComplex 객체" << endl;
        }
        SoComplex(SoComplex &copy)
        {
            cmxObjCnt++;
            cout << cmxObjCnt << "번 째 SoCompelx 객체" < endl;
        }
};
int SoComplex::cmxObjCnt = 0;

int main(void)
{
    SoSimple sim1;
    SoSimple sim2;

    SoComplex cmx1;
    SoComplex cmx2 = cmx1;
    SoComplex();
    return 0;
}

/*
1번 째 SoSimple 객체
2번 째 SoSimple 객체
1번 째 SoComplex 객체
2번 째 SoComplex 객체
*/