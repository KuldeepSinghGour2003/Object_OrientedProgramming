#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char count='A';
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" "<<count ;
            count++;
        }
        cout<<endl;
    }
}