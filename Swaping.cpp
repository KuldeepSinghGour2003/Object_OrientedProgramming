#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After the swaping : a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
} 
/*#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    // Display before swapping
    cout << "\nBefore swapping:\na = " << a << "\nb = " << b << endl;

    // Swap without using temp
    a = a + b;
    b = a - b;
    a = a - b;

    // Display after swapping
    cout << "\nAfter swapping:\na = " << a << "\nb = " << b << endl;

    return 0;
}*/