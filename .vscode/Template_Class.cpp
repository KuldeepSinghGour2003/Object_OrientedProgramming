#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class Template
{
    public:
       T1 a;
       T2 b;
       T3 c;

       Template(T1 x, T2 y, T3 z)
       {
        a=x;
        b=y;
        c=z;
       }

       void display()
       {
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
                cout<<"The value of c is:"<<c<<endl;



       }
};

int main()
{
    Template<> t(99,98.24334,'U');
    t.display();
    cout<<endl;
    Template<float, char, char> temp(98.24334,'B','E');
   temp.display();
}