#include<iostream>
using namespace std;

class Employee{
    private:
    char name[20];
    long e_id;

    public:
    void getdata()
    {
        cout<<"Name of Employee is:"<<endl;
        cin>>name;
        cout<<"Id of Employee is:"<<endl;
        cin>>e_id;
    }
     void putdata()
    {
        cout << "\nName: " << name;
        cout << "\nEmployee ID: " << e_id;
    }

};

class Manager :  public Employee
{
    char dept[20];
    double dues;

    public:
    void getdata()
    {
        cout << "\n Manager Details \n";
       Employee:: getdata();     
        cout << "Enter Department: ";
        cin >> dept;
        cout << "Enter Dues: ";
        cin >> dues;
    }
    void putdata()
    {
        cout << "\n Manager Info";
        Employee::putdata();   
        cout << "\nDepartment: " << dept;
        cout << "\nDues: " << dues << endl;
    }
};

class Scientist : public Employee
{
    int publications;

public:

    void getdata()
    {
        cout << "\n---- Scientist Details ----\n";
        Employee::getdata(); 
        cout << "Enter Number of publications: ";
        cin >> publications;
    }

    void putdata()
    {
        cout << "\n---- Scientist Info ----";
        Employee::putdata();
        cout << "\nPublications: " << publications << endl;
    }

};

int main()
{
    Manager m;
    Scientist s;

    cout << "\nEnter details for Manager:";
    m.getdata();

    cout << "\nEnter details for Scientist:";
    s.getdata();

    cout << "\n\n----- OUTPUT -----";
    m.putdata();
    s.putdata();

    return 0;
}