//WAP to count the total number of calls for a member function from more than one objects. [Lets say, from 3 such Objects]

#include<iostream>
using namespace std;
class abc{
  public:
       void func()
      {    static int count=0;
           count++;
          cout<<"function called: "<<count<<"time"<<endl;
          }};
int main(){
     abc a,b,c;
     a.func();
     b.func();
     c.func();
     a.func();
     b.func();
     return 0;}
