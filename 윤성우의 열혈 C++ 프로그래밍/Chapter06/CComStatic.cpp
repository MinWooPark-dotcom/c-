#include <iostream>
using namespace std;

void Counter()
{
    static int cnt;
    cnt++;
    cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
    for (int i = 0; i < 10; i++)
        Counter();
    return 0;
}

/*
Current cnt: 1
Current cnt: 2
Current cnt: 3
Current cnt: 4
Current cnt: 5
Current cnt: 6
Current cnt: 7
Current cnt: 8
Current cnt: 9
Current cnt: 10
*/