#include <iostream>
using namespace std;

struct SalesRec {
    char pID[10];
    int dYear, dMonth, dDate;
    char deliverAddr[40];
};

void PrSalesRec(const SalesRec &srec);

int main()
{
    SalesRec s = {"C25TV001", 2019, 11, 15, "서울시 종로구 대학로86"};

    PrSalesRec(s);
    return 0;
}

void PrSalesRec(const SalesRec &srec)
{
    cout << "Product ID :" << srec.pID << endl;
    cout << "Delivery date:" << srec.dYear << "Year";
    cout << srec.dMonth << "Month";
    cout << srec.dDate << "Day" << endl;
    cout << "Delivery address: " << srec.deliverAddr << endl;
};

// Product ID :C25TV001
// Delivery date:2019Year11Month15Day
// Delivery address: 서울시 종로구 대학로86
