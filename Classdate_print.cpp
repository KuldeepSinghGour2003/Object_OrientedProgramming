#include<iostream>
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;
public:
  Date()
  {
    day=1;
    month=1;
    year=2001;
  }
  void setDate(int d,int m,int y)
  {
    day=d;
    month=m;
    year=y;
  }
  void dispalyDate()
    {
        cout<<"Date="<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main()
{
    Date d1;
    cout<<"Default Date:"<<endl;
    d1.dispalyDate();
    d1.setDate(15,10,2025);
    cout<<"Updated Date:"<<endl;
    d1.dispalyDate();

    return 0;
}
  