#include <iostream>

inline int SQUARE(int x) // inline 함수란 프로그램 코드라인 안으로 들어간 함수이다. inline 키워드를 이용한 함수의 inline화는 컴파일러에 의해서 처리가 됨.
{
    return x * x;
}

int main(void)
{
    std::cout << SQUARE(5) << std::endl;
    std::cout << SQUARE(12) << std::endl;
    return 0;
}

/*
25
144
*/