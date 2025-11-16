#include <iostream>
using namespace std;
// Base class Shape
class Shape
{
public:
    virtual void draw()
    {
        cout << "Base Shape \n";
    }

protected:
    int width;
    int height;
};
// Derived class
class Rectangle : public Shape
{
public:
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }
    void draw()
    {
        cout << "Rectangle with W="<<width<<","<<"H="<<height<<endl;
    }
};
class Circle : public Shape
{
    int rad;

public:
    Circle()
    {
        rad = 2;
    }
    void draw()
    {
        cout << "Circle with rad = " << rad << "\n";
    }
};
int main(void)
{
    Rectangle Rect(4, 5);
    Circle c;
    Shape *ptr;
    ptr = &c;
    ptr->draw();
    ptr = &Rect;
    ptr->draw();
    return 0;
}