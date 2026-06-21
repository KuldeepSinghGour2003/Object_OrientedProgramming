#include <iostream>
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

