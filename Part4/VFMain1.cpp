// 4-12
#include <iostream>
using namespace std;
#include "VecF.h"

int main()
{
    float a[3] = {1, 2, 3};
    VecF v1(3, a);
    VecF v2(v1); 
    v1.print();
    cout << endl;
    v2.print();
    cout << endl;
    return 0;
}

/*
[123]
[123]
VFMain1(48918,0x10e76ee00) malloc: *** error for object 0x7fac67405b40: pointer being freed was not allocated
VFMain1(48918,0x10e76ee00) malloc: *** set a breakpoint in malloc_error_break to debug
*/