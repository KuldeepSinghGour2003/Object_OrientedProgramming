#include<iostream>
using namespace std;

class Employee
{ 
    string name;
    int emplId;
    int b;
    public:
    Employee(int id, int i):emplId(id),b(i)
    {
        //emplId=id;
        cout<<"Constructor executed:"<<endl;
        cout<<"The Id of the Employee is :"<<id<<endl;
        cout<<"The of b is :"<<b<<endl;
    }
     void set_data()
     {
       cout<<"Enter the Name of employee:"<<endl;
        getline(cin, name);
    }
    void display()
    {
        cout<<"Enter the Name of employee:"<<name<<endl;
        cout<<"The Id of the Employee is :"<<emplId<<endl;
        cout<<"The of b is :"<<b<<endl;
    }
};
int main()
{
   Employee empl(989,99);
   empl.set_data();
   empl.display();

  return 0;
}