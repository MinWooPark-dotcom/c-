#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
    public:
        Simple()
        {
            cout << "I'm simple counstructor!" << endl;
        }
};

int main(void)
{
    cout << "case 1: ";
    Simple * sp1 = new Simple;

    cout << "case 2: ";
    Simple *sp2 = (Simple *)malloc(sizeof(Simple) * 1);

    cout << endl << "end of main" << endl;
    delete sp1;
    free(sp2);
    return 0;
}

/*
case 1: I'm simple counstructor!
case 2: 
end of main

new와 malloc 함수의 동작 방식에는 차이가 있다.
new 키워드 사용 시 constructor가 실행된다.
*/