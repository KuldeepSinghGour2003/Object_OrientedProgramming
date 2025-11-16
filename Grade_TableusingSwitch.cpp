#include<iostream>
using namespace std;
int  main()
{
    int marks;
    cout<<"Enter the marks of student:";
    cin>>marks;
    switch(marks/10)
    {
        case 10:cout<<"Student pass by excellent marks of grade:A";
        break;
        case 9:cout<<"Student pass by very good marks grade:B";
        break;
        case 8:cout<<"Student pass by good marks of grade:C";
        break;
        case 7:cout<<"Student pass by average marks of grade:D";
        break;
        case 6:cout<<"Student pass by less than average marks OF grade:E";
        break;
        case 5:cout<<"Student only passed of grade:F";
        break;
        default:cout<<"Student not passed";
    }
    return 0;
}