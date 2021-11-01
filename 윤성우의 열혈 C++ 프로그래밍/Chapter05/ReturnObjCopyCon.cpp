#include <iostream>
using namespace std;

class SoSimple 
{
    private:
        int num;
    public:
        SoSimple(int n): num(n)
        {}
        SoSimple(const SoSimple& copy) : num(copy.num)
        {
            cout << "Called SoSimple(const SoSimple& copy)" << endl;
        }
        SoSimple& AddNum(int n) // 참조형을 반환
        {
            num += n;
            return *this; // 자기 자신을 반환, 반환형이 참조형이니 참조값 반환
        }
        void ShowData()
        {
            cout << "num: " << num << endl;
        }
};

SoSimple SimpleFuncObj(SoSimple ob) // 인자의 전달 과정에서 복사 생성자가 호출됨을 알 수 있음
{
    cout << "Before return" << endl;
    return ob; // 반환형이 참조형이 아님. 따라서 ob 객체의 복사본(임시 객체)가 만들어지면서 반환
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData(); // 37
    obj.ShowData(); // 7
    return 0;
}

/*
Called SoSimple(const SoSimple& copy)
Before return
Called SoSimple(const SoSimple& copy)
num: 37
num: 7
*/