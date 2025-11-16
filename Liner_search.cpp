#include<iostream>
using namespace std;
int main()
{
    int i,flag=0,n;
    int arr[10];
    for(i=0;i<=10;i++)
    {
        cout<<"Enter the element at position"<<i+1<<":";
        cin>>arr[i];
    }    
        cout<<"Enter the searching element:";
        cin>>n;

        for(i=0;i<=10;i++)
        {
            if(arr[i]==n)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Value is found at index"<<i+1<<endl;
        }
        else{
                        cout<<"Value is not found "<<endl;

        }
        return 0;
    
    
}