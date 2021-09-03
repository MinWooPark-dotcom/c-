#include <iostream>

namespace NameSpace1 { int a = 10; }
namespace NameSpace2 { int a = 20; }
int a = 30; // 전역 명칭공간
namespace NameSpace1{ int b = 50; }
int main()
{
    int a = 40; // main 함수 안의 지역 명칭공간
    std::cout << NameSpace1::a << std::endl;
    std::cout << NameSpace2::a << std::endl;
    std::cout << ::a << std::endl;
    std::cout << a << std::endl;
    std::cout << NameSpace1::b << std::endl;
    return 0;
}
