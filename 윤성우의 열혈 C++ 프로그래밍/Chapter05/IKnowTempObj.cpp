#include <iostream>
using namespace std;

class Temporary
{
    private:
        int num;
    public: 
        Temporary(int n): num(n)
        {
            cout << "create obj: " << num << endl;
        }
        ~Temporary()
        {
            cout << "destory obj: " << num << endl;
        }
        void ShowTempInfo()
        {
            cout << "My num is " << num << endl;
        }
};

int main(void)
{
    Temporary(100);
    cout << "***** after make!" << endl << endl;

    Temporary(200);
    cout << "***** after make!" << endl << endl;

    const Temporary &ref = Temporary(300);
    cout << "***** end of main!" << endl << endl;
    return 0;
}

/*
create obj: 100
destory obj: 100
***** after make!

create obj: 200
destory obj: 200
***** after make!

create obj: 300
***** end of main!

destory obj: 300
*/