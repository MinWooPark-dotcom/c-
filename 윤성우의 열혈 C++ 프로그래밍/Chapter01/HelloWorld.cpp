#include <iostream> 

int main(void)
{
    int num=20;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello "<< "World!" << std::endl;
    std::cout << num << ' ' << 'A';
    std::cout << num << ' ' << 3.14 << std::endl;
    return 0;
}

/*
Hello World!
Hello World!
20 A20 3.14
*/