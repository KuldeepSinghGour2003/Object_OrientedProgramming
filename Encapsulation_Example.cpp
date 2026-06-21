#include<iostream>
using namespace std;

class BankAccount
{
    private:
       int accountNumber;
       float balance;

    public:
       void setDetails(int accnum,float bal)
       {
        accountNumber=accnum;
        if(bal>0)
        {
            balance=bal;
        }
        else{
            balance=0;
        }
         
       }   

       int getAccountNumber()
       {
           return accountNumber;
       }

       float getbalance()
       {
        return balance;
       }

       void deposit(float amount)
       {
        if(amount >0)
        {
            balance=balance+amount;
        }
       }

       void withdraw(float amount)
       {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance" << endl;
       }


};
int main()
{
    BankAccount  rup;

    rup.setDetails(980878989,90000);
    cout<<rup.getAccountNumber();
    cout<<rup.getbalance();
    rup.deposit(90.0000);
    cout<<rup.getbalance();
    rup.withdraw(1000);
    cout<<rup.getbalance();


}