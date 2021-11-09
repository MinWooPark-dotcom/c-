#include <iostream>
#include <cstring>
using namespace std;

// PermanentWorker 클래스 정의
class PermanentWorker
{
    private:
        char name[100];
        int salary; // 매달 지불해야 하는 급여액
    public:
        PermanentWorker(const char *name, int money)
            : salary(money)
        {
            strcpy(this->name, name);
        }
        int GetPay() const
        {
            return salary;
        }
        void ShowSalaryInfo() const
        {
            cout << "name: " << name << endl;
            cout << "salary: " << GetPay() << endl
                 << endl;
        }
};

// EmployeeHandler 클래스 정의(기능적 성격이 강함)
// 기능의 처리를 실제로 담당하는 클래스를 가리켜 '컨트롤(control) 클래스' 또는 '핸들러(handler) 클래스'라 한다.
class EmployeeHandler
{
    private:
        PermanentWorker *empList[50];
        int empNum;
    public:
        EmployeeHandler() : empNum(0)
        { }
        void AddEmployee(PermanentWorker* emp)
        {
            empList[empNum++]=emp;
        }
        void ShowAllSalaryInfo() const
        {
            for (int i = 0; i < empNum; i++)
                empList[i]->ShowSalaryInfo();
        }
        void ShowTotalSalary() const
        {
            int sum = 0;
            for (int i = 0; i < empNum; i++)
                sum += empList[i]->GetPay();
            cout << "salary sum: " << sum << endl;
        }
        ~EmployeeHandler()
        {
            for (int i = 0; i < empNum; i++)
                delete empList[i];
        }
};

int main(void)
{
    // 직원 관리 목적으로 설계된 컨트롤 클래스의 객체 생성
    EmployeeHandler handler;

    // 직원 등록
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    handler.AddEmployee(new PermanentWorker("JUN", 2000));

    // 이번 달에 지불해야 할 급여의 정보
    handler.ShowAllSalaryInfo();

    // 이번 달에 지불해야 할 급여의 총합
    handler.ShowTotalSalary();
    return 0;
}

/*
name: KIM
salary: 1000

name: LEE
salary: 1500

name: JUN
salary: 2000

*/