#include <iostream>
using namespace std;

// Function that converts fahrenheit temperature to celsius temperature
float FahrToC(float fahr)
{
    return(fahr - 32) * 5 / 9;
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

// Fahrenheit temperature :75
// --> Celsius temperature: 23.8889