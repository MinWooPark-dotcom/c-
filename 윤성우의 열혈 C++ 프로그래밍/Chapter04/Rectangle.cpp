#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr)
{
    if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
    {
        cout << "잘못된 위치 정보 전달" << endl;
        return false;
    }
    upLeft = ul;
    lowRight = lr;
    return true;
}

void Rectangle::ShowRecInfo() const
{
    cout << "Upper left: "
         << "[" << upLeft.GetX() << ", ";
    cout << upLeft.GetY() << "]" << endl;
    cout << "Lower right: "
         << "[" << lowRight.GetX() << ",";
    cout << lowRight.GetY() << "]" << endl << endl;
}