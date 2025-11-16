#include<iostream>
using namespace std;

class Student
{
    private:
        int roll;
        string name;

    public:
       Student(int r,string n)
       {
        roll=r;
        name=n;
       }
       Student(Student &obj)
       {
        roll=obj.roll;
        name=obj.name;
       }
       void display()
       {
        cout<<"RollNo.="<<roll<<endl<<"Name="<<name<<endl;
       }


};
int main()
{
    Student s1(99,"Kuldeep Singh Gour");
    cout<<"Parameterized Constructor:"<<endl;
    s1.display();

    Student s2(s1);
    cout<<"Copy Constructor:"<<endl;
    s2.display();

}