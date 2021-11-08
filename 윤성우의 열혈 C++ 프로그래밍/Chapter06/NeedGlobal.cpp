#include <iostream>
using namespace std;

int simObjCnt = 0;
int cmxObjCnt = 0;

class SoSimple
{
public:
    SoSimple()
    {
        simObjCnt++;
        cout << simObjCnt << "번 째 SoSimple 객체" << endl;
    }
};

class SoComplex 
{
public:
    SoComplex()
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "번 째 SoComplex 객체" << endl;
    }
    SoComplex(SoComplex &copy)
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "번 째 SoComplex 객체" << endl;
    }
};

int main(void)
{
    SoSimple sim1;
    SoSimple sim2;

    SoComplex com1;
    SoComplex com2 = com1;
    SoComplex();
    return 0;
}

/*
1번 째 SoSimple 객체
2번 째 SoSimple 객체
1번 째 SoComplex 객체
2번 째 SoComplex 객체
3번 째 SoComplex 객체
*/