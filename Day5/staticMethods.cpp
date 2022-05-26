#include <iostream>
using namespace std;
class account
{
public:
    int acc_no;
    int balance;
    static int min_balance;
    void getAccNo()
    {

        cout << "Enter an account number:";
        cin >> acc_no;
    }
    void getBalance()
    {
        cout << "Enter balance to be deposited:" << endl;
        cin >> balance;
    }
    void displayBalance()

    {

        cout << "Balance:" << balance << endl;
    }
    static void displayMinbalance()
    {
        
        cout << " min balance:" << min_balance << endl;
    }
};
int account::min_balance = 100;
int main()
{
    account acc[5];
    
    for(int i = 0; i < 5; i++) {
        acc[i].getAccNo();
        acc[i].getBalance();
    }
    
    for(int i = 0; i < 5; i++) {
        acc[i].displayBalance();
        account::displayMinbalance();
    }

}