#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
    char gamerID[ID_LEN]; // 소유자 ID
    int fuelGauge; // 연료량
    int curSpeed; // 현재 속도

    void ShowCarState(const Car &car)
    {
        cout << "Gamer ID: " << gamerID << endl;
        cout << "fuelGuage: " << fuelGauge << endl;
        cout << "Current speed: " << curSpeed << endl;
    }

    void Accel(Car &car)
    {
        if(fuelGauge <= 0)
            return;
        else
            fuelGauge -= FUEL_STEP;

        if (curSpeed+ACC_STEP >= MAX_SPD)
        {
            curSpeed = MAX_SPD;
            return;
        }

        curSpeed += ACC_STEP;
    }

    void Break(Car &car)
    {
        if (curSpeed<BRK_STEP)
        {
            curSpeed = 0;
            return;
        }

        curSpeed -= BRK_STEP;
    }
};

int main(void)
{
    Car run99 = {"run99", 100, 0};
    run99.Accel(run99);
    run99.Accel(run99);
    run99.ShowCarState(run99);
    run99.Break(run99);
    run99.ShowCarState(run99);

    Car sped77 = {"sped77", 100, 0};
    sped77.Accel(sped77);
    sped77.Break(sped77);
    sped77.ShowCarState(sped77);
    return 0;
}


/*
Gamer ID: run99
fuelGuage: 96
Current speed: 20
Gamer ID: run99
fuelGuage: 96
Current speed: 10
Gamer ID: sped77
fuelGuage: 98
Current speed: 0
*/