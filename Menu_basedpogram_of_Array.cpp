 #include<iostream>
 using namespace std;
 #define SIZE 10
 int arr[SIZE];
 void traverse(int arr[])
{
   cout<<"Array elements:";
   for(int i=0;i<SIZE;i++)
   {
     cout<<arr[i]<<" ";
   }

}
void minimum(int arr[])

{
    // traverse(int arr[]
    int min=arr[0]; 
    for(int i=1;i<SIZE;i++)
    {

if(arr[i]<min)
{
 min=arr[i];
}
}
cout<<"Minimum element"<<min<<endl;
}
 void maximum(int arr[])
{
    int max=arr[0];
    for(int i=1;i<SIZE;i++)
    {
        if(arr[i]>max)
         {
            max=arr[i];
        }
    }

cout<<"Minimum element"<<max<<endl;
}
void sum(int arr[])
 {
    int sum=0;
    for(int i=0;i<SIZE;i++)

{
  sum=sum+arr[i];
 }

cout<<"sum of elements: "<<sum<<endl;
}
 void average(int arr[])
{
    int sum=0;



for(int i=0;i<SIZE;i++)

{
    sum+=arr[i];
}
double avg=double(sum)/SIZE;
cout<<"Average of elements: "<<avg<<endl;

}
 void exit()
{
cout<<"exiting program: \n";
}
int main()
{
    cout<<"Enter the size:"<<SIZE<<endl;
    for(int i=0;i<SIZE;i++)
    {

     cin>>arr[i];
     }

  int choice;
  do{
    cout<<"MENU \n";
    cout<<"1.Traverse the array\n";
    cout<<"2. Find Minimum \n";
    cout<<"3. Find maximum\n";
    cout<<"4.Sum\n";
    cout<<"5. Average\n";
    cout<<"6.Exit\n";
    cout<<"Enter your choice:";
    cin>>choice;


switch(choice){



case 1:



traverse(arr);
break;
case 2:



minimum(arr);
break;
case 3:
maximum(arr);

break;
case 4:
sum(arr);

break;
case 5:
average(arr);
break;
case 6:
exit();
break;
default:
cout<<"Invalid choice! please try again \n:";

}

}while(choice!=6);
}

