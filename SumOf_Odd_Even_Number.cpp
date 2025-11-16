#include<iostream>
using namespace std;
int main()
{
    int i,sumOdd=0,sumEven=0,n;
    cout<<"Enter the number:";
    cin>>n;
    for(i=0;i<=n;i++)
    {
    if(i%2==0)
    {
        sumEven=sumEven+i;
    }
    else{
        sumOdd=sumOdd+i;
    }
    }
    cout<<"Sum of first n even number is:"<<sumEven<<endl;
    cout<<"Sum of first n odd number is:"<<sumOdd<<endl;
    return 0;
}

