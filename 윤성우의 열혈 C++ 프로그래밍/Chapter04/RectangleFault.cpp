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

*문제 발생*
점의 좌표는 0이상 100이하가 되어야 하는데, 그렇지 못한 Point 객체가 있고,
직사각형을 의미하는 Rectangle 객체의 좌상단 좌표 값이 우하단 좌표 값보다 큰 문제가 발생

*해결책*
제한된 방법으로의 접근만 허용해서 잘못된 값이 저장되지 않도록 세팅해야 함.
정보은닉을 위해 멤버 변수를 private 접근 제어 지시자로 사용
*/