#include <iostream>
using namespace std;

class Student {
private:
    static int rollCounter;

public:
    static void showCounter() {        // static function
        cout << "Total Students = " << rollCounter << endl;
    }
};

int Student::rollCounter = 3;

int main() {
    Student::showCounter();   // ✔ works now
}
