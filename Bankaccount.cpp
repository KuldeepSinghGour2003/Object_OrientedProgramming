#include<iostream>
using namespace std;
class Bankaccount
{
private:
    string accountholdername;
    int accountno;
    double balance;
public:
    void Accountetails()
    {
       // cout<<"inputdetails"<<endl;
        cout<<"Enter the accountholder name:"<<endl;
        getline(cin,accountholdername);
         cout<<"Enter the accountno:";
        cin>> accountno;
        
         cout<<"Enter the Initial balance:"<<endl;
         cin>>balance;
         
    }

    void deposit(int amount)
    {
        
         balance += amount ;  
         cout<<"More Balannce add:"<<endl;

    }
    void displaydetails()
    {
        cout<<"Account Holdername:"<<accountholdername<<endl;
        cout<<"Account Number:"<<accountno<<endl;
        cout<<"Account Balance:"<<balance<<endl;
    }
};
int main() {
    Bankaccount a1;

    a1.Accountetails();
    a1.deposit(10000);
    a1.displaydetails();
    

    return 0;
}