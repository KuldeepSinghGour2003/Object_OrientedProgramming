#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    float average;
    cout<<"Enter the Number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of "<<n<<"natural number is:"<<sum<<endl;
    average=float(sum)/n;
    cout<<"The average of n natural number is:"<<average<<endl;
    return 0;
}