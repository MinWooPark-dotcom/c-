#include <cmath> // C 표준헤더 math.h에 대응
#include <cstdio> // C 표준헤더 stdio.h에 대응
#include <cstring> // C 표준헤더 string.h에 대응
using namespace std; // C의 표준에 정의된 함수들도 이름공간 std에 선언이 되어있음

int main(void)
{
    char str1[] = "Result";
    char str2[30];

    strcpy(str2, str1);
    printf("%s: %f \n", str1, sin(0.14));
    printf("%s: %f \n", str2, abs(-1.25));
    return 0;
}

/*
Result: 0.139543 
Result: 1.250000
*/