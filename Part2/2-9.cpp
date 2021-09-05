#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141593;

struct C2dType { // Two dimensional coordinate structure
    double x, y;
};

struct CircleType { // Circle structure
    C2dType center; 
    double radius;
};

double circleArea(CircleType c)
{
    return c.radius * c.radius * PI;
}

bool chkOverlap(CircleType c1, CircleType c2)
{
    double dx = c1.center.x - c2.center.x;
    double dy = c1.center.y - c2.center.y;
    double dCntr = sqrt(dx * dx + dy * dy);
    return dCntr < c1.radius + c2.radius;
}

void dispCircle(CircleType c)
{
    cout << " center: (" << c.center.x << "," << c.center.y << ")";
    cout << " radius: " << c.radius << endl;
}

int main()
{
    CircleType c1 = {{0, 0}, 10}; // Initialize to center(0, 0), radius 10
    CircleType c2 = {{30, 10}, 5}; // Initialize to center(30, 10), radius 5

    cout << "Circle 1" << endl;
    dispCircle(c1);
    cout << "Area of circle 1: " << circleArea(c1) << endl;
    cout << "Circle 2" << endl;
    dispCircle(c2);
    cout << "Area of circle 2: " << circleArea(c2) << endl << endl;

    // Output whether tow circles are nested
    if (chkOverlap(c1, c2))
        cout << "두 원은 중첩됩니다." << endl;
    else
        cout << "두 원은 중첩되지 않습니다." << endl;
    return 0;
}