#include <iostream>
#include "NamedObj.h"
using namespace std;

void f()
{
    NamedObj x("Third");
    x.display();
}

int main()
{
    cout << "Number of objects in class NamedObj: " << NameObj::nObj() << endl;
    NamedObj a("First");
    NamedObj b("Second");
    a.display();
    b.display();
    f();
    NamedObj c("Fourth");
    c.display();
    cout << "Number of objects in class NamedObj: " << NamedObj::nObj() << endl;
    return 0;
}