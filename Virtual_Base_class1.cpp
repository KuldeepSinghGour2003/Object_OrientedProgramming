#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void show_data()
    {
        a = 20;
        cout << "a= " << a << "\n";
    }
};
class B : virtual public A
{
};
class C : public virtual A
{
};

class D : public B, public C
{
};
int main()
{
    D object;
    object.show_data();
}