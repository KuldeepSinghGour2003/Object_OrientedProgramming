#include <iostream>
using namespace std;

class student
{
    string name;
    string subject[5];
    int rollNo;
    int marks[5];

public:
    student(string n, int r, int m[], string s[])
    {
        name = n;
        rollNo = r;
        for (int i = 0; i < 5; i++)
        {
             marks[i] = m[i];
            subject[i] = s[i];
        
        }
    }
    void inputdetails()
    {

        cout << "Enter the name of student:" << endl;
        getline(cin, name);

        cout << "Enter the rollNo. of student:" << endl;
        cin >> rollNo;

        cout << "Enter the name of subjects of student:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subjects" << (i + 1) << ":"<<endl;
            cin>>subject[i];
        }

        cout << "Enter the marks of student:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks" << (i + 1) << ":"<<endl;
            cin>>marks[i];
        }
    }

    void displaydetails()
    {
        cout << "Name:" << name << endl;
        cout << "RollNo:" << rollNo << endl<<endl;

        cout << "The Name of 5 Subjects:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subjects" << (i + 1) << ":" << subject[i]<<endl;
        }
        cout<<endl;
        cout <<"Marks of 5 subjects:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << " Marks of subject " << (i + 1) <<":" << marks[i]<<endl;
        }
        cout<<endl;
    }
};
int main()
{

    string subjects1[5] = {"Math", "Science", "English", "History", "Computer"};
    int marks1[5] = {85, 90, 78, 88, 92};

    string subjects2[5]={"Math", "Science", "English", "History", "Computer"};
    int marks2[5]={86,84,94,97,95};

    student s1("Kuldeep", 99, marks1,subjects1);
    s1.displaydetails();
    student s2("Rahul",89,marks2,subjects2);
    s2.displaydetails();
}