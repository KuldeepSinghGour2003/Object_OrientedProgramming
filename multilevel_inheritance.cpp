#include<iostream>
using namespace std;

class student
{
  protected:
   int roll_number;
  public:
   void set_roll_number(int r)
   {
    roll_number=r;
   }
   void get_roll_number()
   {
    cout<<"The roll_number is:"<<roll_number<<endl;
   }
};
class Exam:public student
{
  protected:
   float maths;
   float physics;
   public:
   void set_marks(float m1,float m2)
   {
    maths=m1;
    physics=m2;
   }
   void get_marks()
   {
    cout<<"The number obtained in maths are : "<<maths<<endl;
    cout<<"The number obtained in physics are : "<<physics<<endl;
   }
};
class Result:public Exam
{
   float percentage;
   public:
   void display_result()
   {
    get_roll_number();
    get_marks();
    cout<<"your percentage is :"<<(maths+physics)/2<<endl;

   }
};

int main()
  {Result Kuldeep;
    Kuldeep.set_roll_number(99);
    Kuldeep.set_marks(98.00,87.00);
    Kuldeep.display_result();
    
   return 0;
}