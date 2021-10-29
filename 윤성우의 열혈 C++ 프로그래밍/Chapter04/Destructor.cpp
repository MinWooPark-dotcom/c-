#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    private:
        char *name;
        int age;
    public:
        Person(const char *myname, int myage)
        {
            int len = strlen(myname) + 1;
            name = new char[len];
            strcpy(name, myname); // strcpy 함수 원형: char* strcpy(char* dest,woo: const char* origin);
            age = myage;
        }
        void ShowPersonInfo() const 
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
        ~Person() // Destructor
        {
            delete[] name;
            cout << "called destructor!" << endl;
        }
};

int main(void)
{
    Person man1("Lee dong woo", 29);
    Person man2("Jang dong gun", 41);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}

/*
Name: Lee dong woo
Age: 29
Name: Jang dong gun
Age: 41
called destructor!
called destructor!
*/