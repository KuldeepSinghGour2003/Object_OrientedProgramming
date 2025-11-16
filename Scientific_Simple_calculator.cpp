#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    int a, b;

public:
    void getData_Simple()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }
    void performOperationSimple()
    {
        cout << "The Addition of two numbers:" << a + b << endl;
        cout << "The Substraction of two numbers:" << a - b << endl;
        cout << "The Multiplication of two numbers:" << a * b << endl;
        cout << "The Division of two numbers:" << a / b << endl;
    }
};
class ScientificCalculator
{
    int a, b;

public:
    void getData_Scientific()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }
    void performOperationScientific()
    {
        cout << "The sin(a) and sin(b) is : " << sin(a)<<"  " << "and" <<"  "<< sin(b) << endl;
        cout << "The cos(a) and cos(b) is : " << cos(a)<<"  " << "and" <<"  "<< cos(b) << endl;
        cout << "The exp(a) and exp(b) is : " << exp(a)<<"  " << "and" <<"  "<< exp(b) << endl;
        cout << "The tan(a) and tan(b) is : " << tan(a)<<"  " << "and" <<"  "<< tan(b) << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybridCalculator calc;
    calc.getData_Simple();
    calc.performOperationSimple();
    calc.getData_Scientific();
    calc.performOperationScientific();
    return 0;
}