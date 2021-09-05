#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141593;

struct C2dType { // Two dimensional coordinate structure
    double x, y;
};

class CircleClass { // Circle class
    C2dType center;
    double radius;

public:
    // Initialize circle with center(cx,cy) and r radius
    void init(double cx, double cy, double r) {
        center.x = cx;
        center.y = cy;
        radius = r;
    }
    // Calculate the area of a circle
    double area() const {
        return radius * radius * PI;
    }
    bool chkOverlap(const CircleClass& c) const {
        double dx = center.x - c.center.x;
        double dy = center.y - c.center.y;
        double dCntr = sqrt(dx * dx + dy * dy);
        return dCntr < radius + c.radius;
    }
    // Display information for source objects
    void display() const {
        cout << "center: (" << center.x << "," << center.y << ")";
        cout << "radius:" << radius << endl;
    }
};

int main()
{
    CircleClass c1, c2;
    c1.init(0, 0, 10);
    c2.init(30, 10, 5);

    cout << "Circle 1" << endl;
    c1.display();
    cout << "Area of circle 1:" << c1.area() << endl;
    cout << "Circle 2" << endl;
    c2.display();
    cout << "Area of circle 2:" << c2.area() << endl
         << endl;

    // Output whether two circles are nested
    if (c1.chkOverlap(c2))
        cout << "Two circles overlap." << endl;
    else
        cout << "Two circles don't overlap." << endl;
    return 0;
}
