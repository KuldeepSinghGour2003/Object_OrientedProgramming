#include<iostream>
using namespace std;
int add(int *p,int size)
{
  int i,sum=0;
  for(i=0;i<size;i++)
  {
    sum=sum+*p;
    p++;
  }
  return sum;
}
//int add(int *p,int size);
int main()
{
    int a[10],b[15],sum,i;
    cout<<"Enter the first array elements:"<<endl;
    for(i=0;i<10;i++)
    {
      cin>>a[i];
    }
    cout<<"Enter the second array elements:"<<endl;
    for(i=0;i<15;i++)
    {
      cin>>b[i];
    }
    sum=add(a,10);
    cout<<"Summation of number is:"<<add(a,10)<<endl;
    sum=add(b,15);
    cout<<"Summation of number is:"<<add(b,15)<<endl;
    
    return 0;
}