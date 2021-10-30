#include <iostream>
using namespace std;

class SimpleClass
{
    private:
        int num1;
        int num2;
    public:
        SimpleClass(int n1=0, int n2=0)
        {
            num1 = n1;
            num2 = n2;
        }
        void ShowData() const 
        {
            cout << num1 << ' ' << num2 << endl;
        }
};

int main(void)
{
    // 매개변수가 없는 생성자를 호출할 시 소괄호를 사용하면 컴파일러가 객체 생성문인지 함수의 원형 선언인지 구분할 수 없음 
    SimpleClass sc1(); // Empty parentheses interpreted as a function declaration
    SimpleClass mysc = sc1();
    mysc.ShowData();
    return 0;
}

SimpleClass sc1() 
{
    SimpleClass sc(20, 30);
    return sc;
}