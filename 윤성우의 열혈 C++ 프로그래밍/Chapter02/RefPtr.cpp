#include <iostream>
using namespace std;

int main(void)
{
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;

    int &ref = num;
    int *(&pref) = ptr; // ptr은 num의 주소를 뜻하고 &pref은 ptr의 별칭이며 * 연산자로 num의 값에 접근
    int **(&dpref) = dptr; // dptr은 ptr의 주소를 뜻하고 &dpref는 dptr의 별칭이며 *연산자로 ptr의 값에 한 번, 두 번째 *연산자로 num의 값에 한 번 접근

    cout << ref << endl;
    cout << *pref << endl;
    cout << **dpref << endl;
    return 0;
}

/*
12
12
12
*/