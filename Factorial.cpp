#include<iostream>
using namespace std;

int factorial(int n);
int main()
{
    int n,f;
    cout<<"Enter the value:";
    cin>>n;
    
    f=factorial(n);
    cout<<"factoral of number:"<<f<<endl;

}

int factorial(int n)
{
    int f=1;
    while(n>1)
    {
        f=f*n;
        n--;
    }
    return f;
}