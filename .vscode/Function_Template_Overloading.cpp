#include<iostream>
using namespace std;

template<class T>
class People{
    public:
    T data;
    People(T a)
    {
        data=a;
    }
    void display();
    
};

template<class T>
void People<T>:: display()
    {
        cout<<data<<endl;
    }

void func(int a)
{
    cout<<"I am first func():"<<a<<endl;
}    

template<class T>
void func(T a)
{
    cout<<"I am templasied func():"<<a<<endl;
}    

template<class T>
void func1(T a)
{
    cout<<"I am templasied func1():"<<a<<endl;
}    


int main()
{
    // People<int> p(9);
    // People<float> p1(9.8);
    // People<char> p2('A');
    // cout<<"It run the data of constructor:"<<p.data<<endl;
    // p.display();
    // p1.display();
    // p2.display();

    func(2);//Only run exact high periority
    func1(5);
}