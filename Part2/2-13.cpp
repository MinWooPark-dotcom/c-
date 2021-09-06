#include <iostream>
using namespace std;

int main()
{
    char str[14] = "Hello, world!";
    char *pt;

    cout << str << endl;
    pt = str;
    while(*pt)
    {
        if(*pt >= 'a' && *pt <= 'z')
            *pt = *pt - 'a' + 'A';
        pt++;
    }
    cout << str << endl;
    return 0;
}