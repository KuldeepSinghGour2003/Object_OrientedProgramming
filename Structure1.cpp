#include<iostream>
using namespace std;
struct employee
{
    int eid;
    char favChar;
    double esal;

    /* data */
};
int main()
{
    struct employee e;
    e.eid=99;
    e.favChar= 'k';
    e.esal=99;
    cout<<"e.eid"<<":" <<e.eid<<endl;
    cout<<"e.favChar"<<":" <<e.favChar<<endl;
    cout<<"e.esal"<<":" <<e.esal<<endl;

}