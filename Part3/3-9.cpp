// Overloading 
#include <iostream>
using namespace std;

struct TimeRec {
    int hours;
    int minutes;
};

// Function that adds time
// Arguments 
// - TimeRec &t1: Time to accumulate
// - const TimeRec &ts: Time to add
void AddTime(TimeRec &t1, const TimeRec &t2)
{
    t1.minutes += t2.minutes;
    t1.hours += t2.hours + t1.minutes / 60;
    t1.minutes %= 60;
}

void AddTime(TimeRec &t, int minutes)
{
    t.minutes += minutes;
    t.hours += t.minutes / 60;
    t.minutes %= 60;
}

int main()
{
    TimeRec tRec1 = {2, 30};
    TimeRec tRec2 = {1, 45};

    cout << tRec1.hours << "Hours " << tRec1.minutes << "Minutes + ";
    cout << tRec2.hours << "Hours " << tRec2.minutes << "Minutes = ";
    AddTime(tRec1, tRec2);
    cout << tRec1.hours << "Hours " << tRec1.minutes << "Minutes " << endl;

    cout << tRec1.hours << "Hours " << tRec1.minutes << "Minutes + ";
    cout << "135 minutes = ";
    AddTime(tRec1, 135);
    cout << tRec1.hours << "Hours " << tRec1.minutes << "Minutes " << endl;
    return 0;
}