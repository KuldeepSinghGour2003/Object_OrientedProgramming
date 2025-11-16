#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int length;
    int width;
    int area;
public:
    void inputdetails()
    {
       // cout<<"inputdetails"<<endl;
        cout<<"Enter the name:"<<endl;
        cin>>name;
         cout<<"Enter the length:";
        cin>>length;
         cout<<"Enter the width:"<<endl;
        cin>>width;
    }
    void areacalculate()
    {
        area=length*width;
        
    }

    void displaydetails()
    {
        //cout<<"displaydetails:"<<endl;
         cout<<"Nmae:"<<name<<endl;
          cout<<"Length:"<<length<<endl;
           cout<<"Width:"<<width<<endl;
           cout<<"Area:"<<area<<endl;
           
     }
     
           
           
     
};
int main() {
    student s1;

    s1.inputdetails();
    s1.areacalculate();
    s1.displaydetails();
    

    return 0;
}