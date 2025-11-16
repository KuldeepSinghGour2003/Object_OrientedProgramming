#include<iostream>
using namespace std;
 
int main()
{
    int a,b,c;
    cout<<"Enter the first value:";
    cin>>a;
    cout<<"Enter the second value:";
    cin>>b;
    cout<<"Enter the third value:";
    cin>>c;
    
    if(a>b && a>b)
    {
        cout<<"first value i greater :"<<a<<endl;
    }
    else if(b>a && b>c)
        {
            cout<<"Second value is greater:"<<b<<endl;
        }
    
    else
    {
        cout<<"Third value is greater:"<<c<<endl;
    }
    return 0;

}