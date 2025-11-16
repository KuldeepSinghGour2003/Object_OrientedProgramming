#include <iostream>
using namespace std;

class Shape {
private:
    string color;   // private data

public:
    Shape(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }

    // Pure virtual function
    virtual float area() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(string c, float r) : Shape(c) //This is type to access base class constructor
    {
        radius = r;
    }

    float area() {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(string c, float l, float w) : Shape(c) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }
};

int main() {
    Shape* s;

    s = new Circle("Red", 5);
    cout << "Circle Color: " << s->getColor() << endl;
    cout << "Circle Area: " << s->area() << endl;

    s = new Rectangle("Blue", 4, 6);
    cout << "Rectangle Color: " << s->getColor() << endl;
    cout << "Rectangle Area: " << s->area() << endl;

    return 0;
}
