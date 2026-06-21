#include<iostream>
using namespace std;


class Animal
{
    private:
    string name;

    public:

    Animal(string n)
    {
        name=n;
    }

     virtual void sound()=0;

     void getName()
     {
        cout<<"Name of pet animal:"<<name<<endl;
     }
};

class Dog : public Animal
{
    public:

    Dog(string n): Animal(n) {}

    void sound()
    {
        cout<<"Dog make sound:"<<endl;
    }
};

class Cat : public Animal
{
    public:
    Cat(string n): Animal(n) {}
    void sound()
    {
        cout<<"Cat make sound:"<<endl;
    }
};

int main()
{
    Animal *a;
    Dog d("Tommy");
    Cat c("Swity");
    // Animal *a;
    a = &d;
    a->getName();
    a->sound();

    a = &c;
    a->getName();
    a->sound();

    return 0;

}