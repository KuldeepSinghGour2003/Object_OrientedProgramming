#include<iostream>
using namespace std;

int main()
{
    int arr[10],i;
    int min,max;

    for(i=0;i<10;i++)
    {
        cout<<"Enter the element at position "<<i+1<<":"<<endl;
        cin>>arr[i];
    }
    min=max=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }

        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<"Minimum value is:"<<min<<endl;
      cout<<"Maximum value is:"<<max<<endl;
}
