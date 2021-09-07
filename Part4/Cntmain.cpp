#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
    Counter cnt;
    cnt.reset();
    cout << "Current value of the counter: " << cnt.getValue() << endl; // Clear the counter to zero
    cnt.count();
    cnt.count();
    cout << "Current value of the counter: " << cnt.getValue() << endl;
    return 0;
}

// Current value of the counter: 0
// Current value of the counter: 2