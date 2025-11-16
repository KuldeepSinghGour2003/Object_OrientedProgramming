#include<iostream>
using namespace std;

class Calculator
{
    protected:
     int a,b;

    public:
        Calculator(int x,int y)
        {
            a=-x;
            b=y;
        }
        void operate()
        {
            cout<<"Base Add:"<<a+b<<endl;
        }
        void operate(int x)
        {
            cout<<"Square:"<<x*x<<endl;
        }
}

///#include <iostream>
using namespace std;

class Calculator {
protected:
    int a, b;

public:
    // Parameterized constructor
    Calculator(int x, int y) {
        a = x;
        b = y;
    }

    void operate() {          
        cout << "Base Add: " << a + b << endl;
    }

    // function overloading
    void operate(int x) {     
        cout << "Square: " << x * x << endl;
    }
};

class AdvancedCalculator : public Calculator {
private:
    int c;

public:
    // parameterized constructor
    AdvancedCalculator(int x, int y, int z) : Calculator(x, y) {
        c = z;
    }

    // This hides the base version (not overriding because no virtual)
    void operate() {  
        cout << "Derived Multiply: " << a * b * c << endl;
    }

    // overloading inside derived class
    void operate(int x, int y) {
        cout << "Power: " << x << "^" << y << " = ";

        int ans = 1;
        for (int i = 0; i < y; i++)
            ans *= x;

        cout << ans << endl;
    }
};

int main() {

    Calculator c1(10, 20);
    AdvancedCalculator c2(2, 3, 4);

    cout << "--- Base Class Calls ---" << endl;
    c1.operate();         // base version
    c1.operate(5);        // overloaded (square)

    cout << "\n--- Derived Class Calls ---" << endl;
    c2.operate();         // derived version (hides base)
    c2.operate(3, 4);     // derived overloaded (power)
    c2.operate(7);        // calls BASE VERSION because it is not hidden

    cout << "\n--- Using Base Pointer (NO virtual) ---" << endl;
    Calculator* p = &c2;
    p->operate();         // calls BASE operate() (important!)
    p->operate(8);        // still base class function

    return 0;
}
