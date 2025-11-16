#include <iostream>
using namespace std;
void fibannoci(int n)
{
    int a = 0, b = 1, next, i = 1;
    cout << "Fibannoci series:" << endl;
    while (i <= n)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
        i++;
    }
    //cout << "The result of fibannoci sries is" << x << endl;
}
// int fibannoci(int n);
int main()
{
    int n;
    cout << "Enter the limit of fibannoci series" << endl;
    cin >> n;
    fibannoci(n);
    //cout<<"The result of fibannoci sries is:"<<x<<endl;
    return 0;
}