#include<iostream>
#include<string>
using namespace std;
struct employee
{
    int eid;
    string name;
    double esal;

    /* data */
};
int main()
{
    struct employee e;
    e.eid=99;
    e.name= " Kuldeep Singh Gour" ;
    e.esal=99;
    cout<<"Id"<<":"<<e.eid<<endl;
    cout<<"Name"<<":"<<e.name<<endl;
    cout<<"Salary"<<":"<<e.esal<<endl;

}