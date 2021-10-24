// 인라인 함수는 클래스의 선언과 동일한 파일에 저장되어서 컴파일러가 동시에 참조할 수 있게 해야 한다.
// Header file: 클래스의 선언(declaration), 클래스를 구성하는 외형적인 틀

#ifndef __CARINLINE_H__
#define __CARINLINE_H__ 

#include <iostream>
using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

class Car
{
    private:
        char gamerID[CAR_CONST::ID_LEN];
        int fuelGauge;
        int curSpeed;
    public:
        void InitMembers(char *ID, int fuel);
        void ShowCarState();
        void Accel();
        void Break();
};

inline void Car::ShowCarState()
{
    cout << "Gamer ID: " << gamerID << endl;
    cout << "FuelGauge: " << fuelGauge << "%" << endl;
    cout << "Current speed: " << curSpeed << "km/s" << endl;
}

inline void Car::Break()
{
    if(curSpeed<CAR_CONST::BRK_STEP)
    {
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}

#endif
