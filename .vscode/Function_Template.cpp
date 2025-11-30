 #include<iostream>
 using namespace std;


 template<class T1, class T2>
 float Average(T1 a,T2 b )
{
    float avg= (a+b)/2.0;
    return avg;


}

template<class T>
void swapp(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    float a;
    a=Average(11 , 8);//Use either int or float
    cout<<"The average value is %.2f:"<<a<<endl;
    int x=10,y=19;
    swapp(x,y); 
    cout<<"The swaped value is :"<<x<<" "<<y<<endl; 
    return 0;
}
  