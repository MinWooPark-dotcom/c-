#include <iostream>
using namespace std;

class TwoNumber
{
    private:
        int num1;
        int num2;
    public:
        TwoNumber(int num1, int num2)
        {
            // 멤버변수와 매개변수의 이름이 같으면 this 포인터로 구분 가능
            this->num1 = num1;
            this->num2 = num2;
        }
        /*
        TwoNumber(int num1, int num2)
        : num1(num1), num2(num)
        {
            empty
        } 
        */
       void ShowTwoNumber()
       {
           cout << this->num1 << endl;
           cout << this->num2 << endl;
       }
};

int main(void)
{
    TwoNumber two(2, 4);
    two.ShowTwoNumber();
    return 0;
}

/*
2
4
*/