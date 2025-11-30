#include<iostream>
#include<vector>
using namespace std;

template<class T>
void inputvector(vector<T> &v)
{  
    
    int size;
    cout<<"Enter the size of vector:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
       T elelment;
       cout<<"Enter an element to add this vector: ";
       cin>>elelment;
       v.push_back(elelment);
    }
}
template<class T>
void display(vector<T> &v)
{
   for(int i = 0; i < v.size(); i++)
   {
    cout<<"The dispaly element is:"<<v[i]<<endl;
   }
   cout<<endl;
}

int main()
{
    vector<float> vec;
    inputvector(vec);
    display(vec);
    return 0;

}
