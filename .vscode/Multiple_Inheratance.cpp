#include<iostream>
using namespace std;

class Academic_Marks
{
    protected:
      int math_marks;
      int phy_marks;
      int chem_marks;

    public:
       void getmarks()
       {
        cout<<"Enter the maths marks:"<<endl;
        cin>>math_marks;
            cout<<"Enter the physics marks:"<<endl;
        cin>>phy_marks;
            cout<<"Enter the chemistry marks:"<<endl;
        cin>>chem_marks;
       }
};

class Sports{

    protected:
     int spmarks;
    public:
    void getsports()
    {
        cout<<"Enter the marks of sports:"<<endl;
        cin>>spmarks;
    }
};

class Result : public Academic_Marks ,public Sports
{
 public:
  int total_marks;
  float avg_marks;
  void display()
  {
    cout<<" ________ RESULT_______\n";
    Academic_Marks::getmarks();
    Sports::getsports();
    cout<<"The total marks of student:"<<endl;
    total_marks=math_marks+phy_marks+chem_marks+spmarks;
    avg_marks=total_marks/4.0;
    cout << "Math: " << marks_math << endl;
    cout << "Physics: " << marks_phy << endl;
    cout << "Chemistry: " << marks_chem << endl;
    cout << "Sports: " << spmarks << endl;
    cout<<"Total marks:"<<total_marks<<endl;
    cout<<"Average marks:"<<avg_marks<<endl;

  }
};
int main()
{
    Result r1;
    r1.display();
    return 0;
}