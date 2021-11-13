#include <iostream>
using namespace std;

class CountryArea
{
    public:
        // const static으로 선언되는 멤버변수는 선언과 동시에 초기화가 가능
        const static int RUSSIA = 1707540;
        const static int CANADA = 998467;
        const static int CHINA = 957290;
        const static int SOUTH_KOREA = 9922;    
};

int main(void)
{
    cout << "Area of Russia: " << CountryArea::RUSSIA << "km²" << endl;
    cout << "Area of Canada: " << CountryArea::CANADA << "km²" << endl;
    cout << "Area of China: " << CountryArea::CHINA << "km²" << endl;
    cout << "Area of South Korea: " << CountryArea::SOUTH_KOREA << "km²" << endl;
    return 0;
}

/*
Area of Russia: 1707540km²
Area of Canada: 998467km²
Area of China: 957290km²
Area of South Korea: 9922km²
*/