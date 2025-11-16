#include<iostream>
using namespace std;

class Student
{
    protected:
    int roll_no;
    public:
    void set_number(int a)
    {
        roll_no=a;
    }
    void print_number()
    {
        cout<<"The roll_no is:"<<roll_no<<endl;
    }
};
class Test:virtual public Student
{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
     void print_marks(void)
     {
        cout<<"Your result is present here :"<<endl
            <<"Maths:"<<maths<<endl
            <<"Physics:"<<physics<<endl;
     }
};
class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score=sc;
    }
    void print_score(void)
    {
        cout<<"Your PT score is: "<<score<<endl;
    }
};
class Result : public Sports, public Test 
{
    protected:
    float total;
    public:
    void display(void)
     {
        total=maths+physics;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is :"<<total<<endl;
     }
};
int main()
{
    Result Kuldeep;
    Kuldeep.set_number(999);
    Kuldeep.set_marks(98.0,88.0);
    Kuldeep.set_score(10);
    Kuldeep.display();

  return 0;
}