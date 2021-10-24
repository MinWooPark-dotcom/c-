#include <iostream>
#include <cstring> // C 표준헤더 stdio.h(표준 입출력)에 대응 
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
    // 접근 제어 지시자는 특정 위치 정보를 알리는 레이블이기 때문에 뒤에 ':(콜론)'이 붙음
    private: // 멤버 변수
        char gamerID[CAR_CONST::ID_LEN];
        int fuelGauge;
        int curSpeed;
    public: // 멤버 함수
        void InitMembers(char *ID, int fuel); // 
        void ShowCarState();
        void Accel();
        void Break();
};

// 함수의 정의를 구조체 밖으로 뺌
void Car::InitMembers(char * ID, int fuel) 
{
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState()
{
    cout << "Gamer ID: " << gamerID << endl;
    cout << "FuelGauge: " << fuelGauge << "%" << endl;
    cout << "Current speed: " << curSpeed << "km/s" << endl;
}

void Car::Accel()
{
    if(fuelGauge <= 0)
        return;
    else
        fuelGauge -= CAR_CONST::FUEL_STEP;
    
    if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
    {
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
    if(curSpeed<CAR_CONST::BRK_STEP)
    {
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
    Car run99;
    run99.InitMembers("run99", 100); // conversion from string literal to 'char *' is deprecated
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}

/*
Gamer ID: run99
FuelGauge: 94%
Current speed: 30km/s
Gamer ID: run99
FuelGauge: 94%
Current speed: 20km/s
*/