#include <iostream>
#include <string>
using namespace std;

class student
{

public:
    string name;
    static string SchoolName;
   // student(string n) : name(n) {} 
   student(string n)
   {
     name=n;
   }
    

    void show()
    {
        cout << "Name:" << name<<endl<< "School:" << SchoolName << endl;
    }
};
string student::SchoolName ="Krishna Academy Pandhana";

int main()
{
    student s1("Kuldep");
    student s2("Mohan");

    s1.show();
    s2.show();
}