#include <iostream>
#include "CounterM.h"
using namespace std;

int main()
{
    CounterM cnt(9);

    cout << "Current value of counter: " << cnt.getValue() << endl;
    for (int i = 0; i < 12; i++) {
        cnt.count();
        cout << "Current value of counter: " << cnt.getValue() << endl;
    }
    return 0;
}

/*
Current value of counter: 0
Current value of counter: 1
Current value of counter: 2
Current value of counter: 3
Current value of counter: 4
Current value of counter: 5
Current value of counter: 6
Current value of counter: 7
Current value of counter: 8
Current value of counter: 9
Current value of counter: 0
Current value of counter: 1
Current value of counter: 2
*/