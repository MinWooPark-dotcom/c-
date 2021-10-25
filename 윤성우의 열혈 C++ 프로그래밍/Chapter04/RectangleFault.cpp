#include <iostream>
using namespace std;

class Point
{
    public:
        int x; // x좌표의 범위는 0이상 100이하
        int y;
};

class Rectangle
{
    public:
        Point upLeft;
        Point lowRight;

    public:
        void ShowRecInfo()
        {
            cout << "Upper left: "
                 << "[" << upLeft.x << ", ";
            cout << upLeft.y << "]" << endl;
            cout << "Lower right: "
                 << "[" << lowRight.x << ", ";
            cout << lowRight.y << "]" << endl;
        }
};

int main(void)
{
    // 멤버 변수를 public으로 선언하면 구조체 변수를 초기화하듯 초기화 가능
    Point pos1 = {-2, 4};
    Point pos2 = {5, 9};
    Rectangle rec = {pos2, pos1};
    rec.ShowRecInfo();
    return 0;
}

/*
Upper left: [5, 9]
Lower right: [-2, 4]
*/