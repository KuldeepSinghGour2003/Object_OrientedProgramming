#include<iostream>
using namespace std;
int factorial(int n)
{
    int f;
    if(n==1)
    {
        return 1;
    }
    else
    {
        f=factorial(n-1) * n;
    }
    return f;

}
int main()
{
    int n,f;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"The factorial of number is"<<":"<<factorial(n)<<endl;
    return 0;

}