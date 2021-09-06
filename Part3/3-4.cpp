#include <iostream>
using namespace std;

float FahrToC(float fahr)
{
    fahr -= 32;
    return fahr * 5 / 9;
}

int main()
{
    float fTemp, cTemp;

    cout << "Fahrenheit temperature :";
    cin >> fTemp;
    cTemp = FahrToC(fTemp);
    cout << "--> Celsius temperature: " << cTemp << endl;
    return 0;
}

