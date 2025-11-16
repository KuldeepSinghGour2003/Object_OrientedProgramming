#include <iostream>
using namespace std;
class BankAccount
{
    int accountNumber;
    double balance;
    static double intrestRate;

public:
    BankAccount(int acc, double bal)
    {
        accountNumber = acc;
        balance = bal;
    }
    void showIntrest()
    {
        double intrest = balance * intrestRate;
        cout << "Intrest for AccountNumber is " << accountNumber << ":" <<endl<<"The intrest is:"<< intrest << endl;
    }
    static void changeRate(double rate)
     {
        intrestRate=rate;
     }
     
};

double BankAccount ::intrestRate=0.05;

int main()
{
    BankAccount acc1(101, 100000);
     BankAccount acc2(102, 200000);
    acc1.showIntrest();
    BankAccount::changeRate(0.07);
    acc2.showIntrest();
    return 0;
}