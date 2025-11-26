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

    Complex operator +(Complex &a)
    {
        Complex temp;
        temp.real=real+a.real;
        temp.imag=imag+a.imag;
        return temp;
    }

    Complex operator -(Complex &b)
    {
        Complex temp;
        temp.real=real-b.real;
        temp.imag=imag-b.imag;
        return temp;
    }
Complex operator *(Complex &c)
    {
        Complex temp;
        temp.real=(real*c.real)-(imag*c.imag);
        temp.imag=(real*c.imag)+(imag*c.real);
        return temp;
    }
Complex operator /(Complex &d)
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
    Complex c1(9 , 3);
    Complex c2(2 , 4);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;
    Complex c6 = c1 / c2;
    cout << "Addition: ";   
      c3.show();
    cout << "Subtraction: ";
     c4.show();
    cout << "Multiplication: ";
     c5.show();
    cout << "Division: ";   
     c6.show();

    return 0;

}
