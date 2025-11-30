#include<iostream>
#include<vector>
using namespace std;


template <class T>

void display(vector<T> &v)
{
   cout<<"The dispaly element is:";
   for(int i = 0; i < v.size(); i++)
   {
    cout<<v[i]<<" ";
    // cout<<v.at(i)<<" ";
   }
   cout<<endl;
}

int main()
{
   vector<int> vec;//Zero length vector
    int  element,size=5;
   //  cout<<"Enter the size of vector:";
   //  cin>>size;
   
   //  for(int i=0;i<size;i++)
   //  {

   //     cout<<"Enter an element to add this vector: ";
   //     cin>>element;
   //     vec.push_back(element);
   //  }
   //  //vec.pop_back();
   //  display(vec);
   //  vector<int> :: iterator iter = vec.begin();
   // vec.insert(iter, 988);
    // vec.insert(iter+1,988);
    // vec.insert(iter+1,96,988);

   // display(vec);

      //   vector<char> vec1(5);//5-element character vector
      //   display(vec1);
           vector<char> vec2(5);//5-element character vector 
      //   vec2.push_back('9');
      //   vec2.push_back('2');
      //   vec2.push_back('3');
      //   vec2.push_back('2');
      //   vec2.push_back('1');
      //   display(vec2);
        vector<char> vec3(vec2);
        display(vec3);

        vector<int> vec4(9 , 97);//9-element integer vector of 97s
        display(vec4);
        cout<<"The size of vec4:"<<vec4.size();
    return 0;

}
