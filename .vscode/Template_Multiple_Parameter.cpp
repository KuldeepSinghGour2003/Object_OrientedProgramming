#include<iostream>
using namespace std;

template<class T1,class T2>
class MyClass
{
    public:
    T1 data1;
    T2 data2;
    MyClass(T1 a, T2 b)
    {
        this->data1=a;
        this->data2=b;
    }
      void add()
      {
        cout<<"Addition:"<<data1+data2<<endl;



      }
    void display()
    {
        cout<<this->data1<<" "<<this->data2<<endl;
    }
};
int main()
{
    MyClass<char,float> obj('A',9.88979989897869);

obj.display();
obj.add();

}