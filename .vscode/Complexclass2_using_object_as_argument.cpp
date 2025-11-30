#include<iostream> 
using namespace std;

class Complex
{
    public:
    int real;
    int imag;
  Complex()
  {
    real=0;
    imag=0;
  }
    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }

    Complex add(Complex a)
    {
        Complex temp;
        temp.real=real+a.real;
        temp.imag=imag+a.imag;
        return temp;
    }

    Complex subtract(Complex b)
    {
        Complex temp;
        temp.real=real-b.real;
        temp.imag=imag-b.imag;
        return temp;
    }
Complex multiply(Complex c)
    {
        Complex temp;
        temp.real=(real*c.real)-(imag*c.imag);
        temp.imag=(real*c.imag)+(imag*c.real);
        return temp;
    }
Complex divide(Complex  d)
    {
        Complex temp;
        int deno = (d.real * d.real) + (d.imag * d.imag);

        temp.real = ((real * d.real) + (imag * d.imag)) / deno;
        temp.imag = ((imag * d.real) - (real * d.imag)) / deno;

        return temp;
    }
    
    void show()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c1(8,9);
    Complex c2(2,4);

    Complex c3=c1.add(c2);
    Complex c4=c1.subtract(c2);
    Complex c5=c1.multiply(c2);
    Complex c6=c1.divide(c2);

     cout << "Addition: ";
    c3.show();

    cout << "Subtraction: ";
    c4.show();

    cout << "Multiplication: ";
    c5.show();

    cout << "Division: ";
    c6.show();

}
/*#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex add(Complex c1, Complex c2) {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
    }

    Complex subtract(Complex c1, Complex c2) {
        Complex temp;
        temp.real = c1.real - c2.real;
        temp.imag = c1.imag - c2.imag;
        return temp;
    }

    Complex multiply(Complex c1, Complex c2) {
        Complex temp;
        temp.real = (c1.real * c2.real) - (c1.imag * c2.imag);
        temp.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
        return temp;
    }

    Complex division(Complex c1, Complex c2) {
        Complex temp;
        int deno = (c2.real * c2.real) + (c2.imag * c2.imag);
        temp.real = ((c1.real * c2.real) + (c1.imag * c2.imag)) / deno;
        temp.imag = ((c1.imag * c2.real) - (c1.real * c2.imag)) / deno;
        return temp;
    }

    void show() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 5);
    Complex c2(3, 4);
    Complex c;

    Complex c3 = c.add(c1, c2);
    cout << "Addition: ";
    c3.show();

    Complex c4 = c.subtract(c1, c2);
    cout << "Subtraction: ";
    c4.show();

    Complex c5 = c.multiply(c1, c2);
    cout << "Multiplication: ";
    c5.show();

    Complex c6 = c.division(c1, c2);
    cout << "Division: ";
    c6.show();

    return 0;
}

*/