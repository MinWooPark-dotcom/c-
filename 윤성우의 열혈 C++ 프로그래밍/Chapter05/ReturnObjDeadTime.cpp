#include <iostream>
using namespace std;

class SoSimple
{
    private:
        int num;
    public:
        SoSimple(int n) : num(n)
        {
            cout << "New Object: " << this << endl;
        }
        SoSimple(const SoSimple &copy) : num(copy.num)
        {
            cout << "New copy obj: " << this << endl;
        }
        ~SoSimple()
        {
            cout << "Destory obj: " << this << endl;
        }
};

SoSimple SimpleFuncObj(SoSimple ob)
{
    cout << "Parm ADR: " << &ob << endl;
    return ob;
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj);

    cout << endl;
    SoSimple tempRef = SimpleFuncObj(obj);
    cout << "Return Obj " << &tempRef << endl;
    return 0;
}

/* 
New Object: 0x7ffee02981d8 // 31행의 obj 생성
Destroy obj: 0x7ffee02981c8 // 32행의 함수호출로 인한 23행의 매개변수 
Parm ADR: 0x7ffee02981c8
Destroy obj: 0x7ffee02981d0
Destory obj: 0x7ffee02981d0
Destory obj: 0x7ffee02981c8

Destroy obj: 0x7ffee02981b0
Parm ADR: 0x7ffee02981b0
Destroy obj: 0x7ffee02981b8
Destory obj: 0x7ffee02981b0
Return Obj 0x7ffee02981b8
Destory obj: 0x7ffee02981b8
Destory obj: 0x7ffee02981d8
*/