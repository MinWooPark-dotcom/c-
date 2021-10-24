// Header file: 클래스의 선언(declaration), 클래스를 구성하는 외형적인 틀

#ifndef __CAR_H__
#define __CAR_H__ 

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

#endif
