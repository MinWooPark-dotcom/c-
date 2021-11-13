#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    private:
        int age;
        char name[50];
    public:
        Person(int myage, const char *myname): age(myage) // Constructor
        {
            strcpy(name, myname);
        }
        void WhatYourName() const 
        {
            cout << "My name is " << name << endl;
        }
        void HowOldAreYou() const 
        {
            cout << "I'm " << age << " years old" << endl;
        }
};

class UnivStudent : public Person // Public Inheritance
{
    private:
        char major[50];
    public:
        UnivStudent(const char * myname, int myage, const char * mymajor) 
            : Person(myage, myname)
        {
            strcpy(major, mymajor);
        }
        void WhoAreYou() const
        {
            WhatYourName();
            HowOldAreYou();
            cout << "My major is " << major << endl << endl;
        }
};

int main(void)
{
    UnivStudent ustd1("Lee", 22, "Computer eng.");
    ustd1.WhoAreYou();

    UnivStudent ustd2("Yoon", 21, "Electronic eng.");
    ustd2.WhoAreYou();
    return 0;
}

/*
My name is Lee
I'm 22 years old
My major is Computer eng.

My name is Yoon
I'm 21 years old
My major is Electronic eng.
*/