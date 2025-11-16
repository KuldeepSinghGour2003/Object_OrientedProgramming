#include<iostream>
using namespace std;
//void swapvValue(int a, int b);
int main()
{
    int a=10,b=20;
    cout<<"Before Swapping:a="<<a<<"b="<<b<<endl;
    swapValue(a,b);
     cout<<"After Swapping:a="<<a<<"b="<<b<<endl;
     //return 0;
    //printf("%d",a);
    //printf("%d",b);
    //printf("%d",c);
}
void swapValue(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp; 
    cout<<"Inside function:a="<<a<<"b="<<b<<endl;
}