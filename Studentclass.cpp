#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int rollno;
    int marks[10];
public:
    void inputdetails()
    {
       // cout<<"inputdetails"<<endl;
        cout<<"Enter the name:"<<endl;
        getline(cin,name);
         cout<<"Enter the rollno:";
        cin>>rollno;
         cout<<"Enter the marks:"<<endl;
         {
            for(int i=0;i<10;i++)
            {
                cout<<"marks of subjects are"<<(i+1)<<":";
                cin>>marks[i];
            }
        }
    }

    void displaydetails()
    {
        //cout<<"displaydetails:"<<endl;
         cout<<"Nmae:"<<name<<endl;
          cout<<"Rollno:"<<rollno<<endl;
           cout<<"Marks:"<<endl;
           {
            for(int i=0;i<10;i++)
            {
                cout<<"marks[i]"<<marks<<endl;
            }
           }
           int total=0;
           {
            for(int i=0;i<10;i++)
            {
                total+=marks[i];
            }
            cout<<"Total marks:\n"<<total<<endl;

           }
     }
};
int main() {
    student s1;

    s1.inputdetails();
    s1.displaydetails();

    return 0;
}

/*#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks[5];  // Array to store marks for 5 subjects

public:
    void inputDetails() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }

        cin.ignore(); // To handle newline character after marks input
    }

    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;

        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }

        // Optional: Calculate total and average
        float total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        float average = total / 5;

        cout << "\nTotal Marks: " << total;
        cout << "\nAverage Marks: " << average << endl;
    }
};

int main() {
    Student s1;

    s1.inputDetails();
    s1.displayDetails();

    return 0;
}*/