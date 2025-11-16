/*#include<iostream>
int main()
{
    int  a[100],i,j,n;
    cout<<"Enter the element up to 100 :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin<<"a[i]";
    }
     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<"a[i]"<<endl;
                break;
            }
        }
    

    }
}*/
#include <iostream>
using namespace std;

int main() {
    int a[10], n, i, j;

    // cout << "Enter the number of elements (up to 10)"; 
     cout<<"Enter the number: "<<endl;
    
    for (i = 0; i < 10; i++) 
    {
        cout<<"Enter the value at position "<< (i+1)<<endl;
        cin>>a[i];
    }

    cout << "\nDuplicate elements are:\n";
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
         {
            if (a[i] == a[j]) 
            {
                cout << a[i] << endl;
                break; // Optional: to avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}