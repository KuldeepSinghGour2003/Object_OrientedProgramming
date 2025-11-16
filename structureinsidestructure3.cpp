#include<iostream>
#include<string>
using namespace std;
struct Address
{
    string city;
    string country;
};
struct Employee
{
    string name;
    int id;
     Address addr;
};
int main()
{
    Employee emp;
    emp.name= "Kuldeep singh Gour";
    emp.id=99;
    emp.addr.country="India";
    emp.addr.city="Indore";

     cout<<"Employee Name :"<<emp.name<<endl;
     cout<<"Employee Id:"<<emp.id<<endl;
     cout<<"country:"<<emp.addr.country<<endl;

     cout<<"city :"<<emp.addr.city<<endl;
}