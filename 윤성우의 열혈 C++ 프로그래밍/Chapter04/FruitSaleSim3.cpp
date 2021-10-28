#include <iostream>
using namespace std;

class FruitSeller
{
    private:
        const int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        FruitSeller(int price, int num, int money)
            : APPLE_PRICE(price), numOfApples(num), myMoney(money) 
        {            
        }
        int SaleApples(int money)
        {
            int num = money / APPLE_PRICE;
            numOfApples -= num;
            myMoney += money;
            return num;
        }
        void ShowSalesResult() const 
        {
            cout << "The remaining apples: " << numOfApples << endl;
            cout << "Revenue from sales: " << myMoney << endl << endl;
        }
};

class FruitBuyer
{
    private:
        int myMoney;
        int numOfApples;
    public:
        FruitBuyer(int money)
            : myMoney(money), numOfApples(0)
        {
        }
        void BuyApples(FruitSeller &seller, int money)
        {
            numOfApples += seller.SaleApples(money);
            myMoney -= money;
        }
        void ShowBuyResult() const
        {
            cout << "Current money: " << myMoney << endl;
            cout << "Number of apples " << numOfApples << endl
                 << endl;
        }
};

int main(void)
{
    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);

    cout << "The status of fruit seller" << endl;
    seller.ShowSalesResult();
    cout << "The status of fruit buyer" << endl;
    buyer.ShowBuyResult();
    return 0;
}

/*
The status of fruit seller
The remaining apples: 18
Revenue from sales: 2000

The status of fruit buyer
Current money: 3000
Number of apples 2
*/