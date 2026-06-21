#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    // Default Constructor
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    // Parameterized Constructor (24-hour format)
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    // Function to display time in 24-hour format
    void display24()
    {
        cout << "24-Hour Format: ";
        cout << hour << ":" << minute << ":" << second << endl;
    }

    // Function to display time in 12-hour format
    void display12()
    {
        int h = hour;
        string period = "AM";

        if (h >= 12)
            period = "PM";
        if (h > 12)
            h = h - 12;
        if (h == 0)
            h = 12;

        cout << "12-Hour Format: ";
        cout << h << ":" << minute << ":" << second << " " << period << endl;
    }

    // Convert 24-hour time to 12-hour format
    void convertTo12()
    {
        display12();
    }

    // Convert 12-hour time to 24-hour format
    void convertTo24()
    {
        display24();
    }
};

int main()
{
    // Using Default Constructor
    Time t1;
    cout << "Using Default Constructor:" << endl;
    t1.display24();
    t1.convertTo12();

    cout << endl;

    // Using Parameterized Constructor
    Time t2(14, 30, 45);
    cout << "Using Parameterized Constructor:" << endl;
    t2.display24();
    t2.convertTo12();

    return 0;
}
       