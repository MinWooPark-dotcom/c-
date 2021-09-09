#include <iostream>
#include "CharStack.h"
using namespace std;

int main()
{
    CharStack chStack;
    char str[20];

    cout << "Enter an English word: ";
    cin >> str;

    char *pt = str;
    while (*pt)
        chStack.push(*(pt++));

    cout << "Reverse word output: ";
    while (!chStack.chkEmpty())
        cout << chStack.pop();
    cout << endl;
    return 0;
}