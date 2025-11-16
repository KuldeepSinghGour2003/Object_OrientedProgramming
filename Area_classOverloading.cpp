#include<iostream>
using namespace std;
int area(int side)
{
    return side*side;
}
int area(int length, int breadth)
{
    return length*breadth;
}
float area(float radius)
{
    return 3.1459f*radius*radius;
}
int main()
{
    cout<<"Area of square:"<<area(5)<<endl;
    cout<<"Area of reactangle:"<<area(6,5)<<endl;
    cout<<"Area of circle:"<<area(9)<<endl;
}