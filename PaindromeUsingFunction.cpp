#include<iostream>
using namespace std;


void palindrome(int n)
{
    int sum=0,i;
    int temp,r;
    temp=n;

    while (n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
      if(sum==temp)     
       {
           cout<<"It s a palindrome:"<<temp<<endl;
       }
       else
       {         
        cout<<"It is not a palindrome"<<endl;     
       }
    

}
int main()
{
    int n;
    cout<<"Enter the value:";
    cin>>n;

    palindrome(n );
    return 0;  

    
}
