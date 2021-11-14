#include <iostream>
using namespace std;

class SoBase
{
    private:
        int baseNum;
    public:
        SoBase(int n) : baseNum(n)
        {
            cout << "SoBase() : " << baseNum << endl;
        }
        ~SoBase()
        {
            cout << "~SoBase() : " << baseNum << endl;
        }
};

class SoDerived : public SoBase 
{
    private:
        int derivNum;
    public:
        SoDerived(int n) : SoBase(n), derivNum(n)
        {
            cout << "SoDerived() : " << derivNum << endl;
        }
        ~SoDerived()
        {
            cout << "~SoDerived() : " << derivNum << endl;
        }
};

int main(void)
{
    SoDerived drv1(15);
    SoDerived drv2(27);
    return 0;
}

/*
SoBase() : 15
SoDerived() : 15
SoBase() : 27
SoDerived() : 27
~SoDerived() : 27 // 유도 클래스의 소멸자가 실행되고 난 다음에 기초 클래스의 소멸자가 실행됨
~SoBase() : 27
~SoDerived() : 15
~SoBase() : 15
*/