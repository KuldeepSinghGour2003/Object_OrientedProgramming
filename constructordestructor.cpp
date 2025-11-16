/*#include<iostream>
using namespace std;
class Employee
{
    string name;
    int empid;
    float salary;
public:
     Employee(string n,int id,float sal)
     {
        name=n;
        empid=id;
        salary=sal;
     }
     void displaydetails()
     {
        cout<<"Name of Employee:"<<name<<endl;
        cout<<"Id of Employee:"<<empid<<endl;
        cout<<"Salary of Employee:"<<salary<<endl<<endl;
     }
     ~Employee()
     {
        cout<<"Destructor invoke for employee:"<<name<<endl;
     }
};
   
int main()
{
    Employee e1("Kuldeep",101,1000000);
    Employee e2("Gopal",102,19800);

    cout<<endl<<"Employee details:"<<endl<<endl;

    e1.displaydetails();
    e2.displaydetails();
    
  return 0;
}*/








#include <iostream>
using namespace std;

int main() {
    int arr[10], i;
    int min, max;

    // Input array elements
    for (i = 0; i < 10; i++) {
        cout << "Enter the element at position " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Initialize min and max with the first element
    min = max = arr[0];

    // Find min and max
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Output results
    cout << "Minimum value is = " << min << endl;
    cout << "Maximum value is = " << max << endl;

    return 0;
}
