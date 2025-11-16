#include<iostream>
using namespace std;
 

class Distance
{
    private:
      int feet; 
      float inches;

    public:
      void setdist(int f,float i)
      {
        feet=f;
        inches=i;

      }
      void showdist()
      {
        cout<<feet<<" feet,"<<inches<<" inches"<<endl;
      }
};

int main()
{
    Distance d1;
    d1.setdist(5,8.5);
    cout<<"You entered:";
    d1.showdist();

}