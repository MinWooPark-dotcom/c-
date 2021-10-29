#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    private:
        char *name;
        int age;
    public:
        Person(char * myname, int myage)
        {
            int len = strlen(myname) + 1;
            name = new char[len];
            strcpy(name, myname);
            age = myage;
        }
        Person() // 배열 생성 시 필요한 형태의 생성자, 생성자에 인자를 전달하지 못하기 때문
        {
            name = NULL;
            age = 0;
            cout << "called Person()" << endl;
        }
        void SetPersonInfo(char * myname, int myage) // 배열 선언 이후에 멤버 변수를 원하는 값으로 초기화하기 위한 함수
        {
            name = myname;
            age = myage;
        }
        void ShowPersonInfo() const
        {
            cout << "Name: " << name << ", ";
            cout << "Age: " << age << endl;
        }
        ~Person()
        {
            delete[] name;
            cout << "called destructor" << endl;
        }
};

int main(void)
{
    Person parr[3];
    char namestr[100];
    char *strptr;
    int age;
    int len;

    for (int i = 0; i < 3; i++)
    {
        cout << "Name: ";
        cin >> namestr;
        cout << "Age";
        cin >> age;
        len = strlen(namestr) + 1;
        strptr = new char[len];
        strcpy(strptr, namestr);
        parr[i].SetPersonInfo(strptr, age);
    }
    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();
    return 0;
}