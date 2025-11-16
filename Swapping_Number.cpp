#include<iostream>
using namespace std;

/*void swapValue(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside function:a="<<a<<",b="<<b<<endl;

}
int main()
{
    int x=10,y=20;
    cout<<"Before swapping:x="<<x<<",y="<<y<<endl;
    swapValue(x,y);
    cout<<"After swapping:x="<<x<<",y="<<y<<endl;
    return 0;
}

void swapPointer(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int a=5,b=6;
    cout<<"Before swapping:a="<<a<<",b="<<b<<endl;
    swapPointer(&a,&b);
    cout<<"Before swapping:a="<<a<<",b="<<b<<endl;
    return 0;
}*/


void swapRefrence(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    cout<<"Before swapping:x="<<x<<",y="<<y<<endl;
    swapRefrence(x,y);
    cout<<"After swapping:a="<<x<<",y="<<y<<endl;
    return 0;
}

