/*WAP in which you can add two objects [every object would have 1 integer value] by overloading + operator, which eventually would add the data values of
those two object by adding the objects.*/


#include<iostream>
using namespace std;

class person
{
    public:
    int age;
    friend int operator +(person &a,person &b); 
};
int operator +(person &a,person&b)
{
    return a.age+b.age;
}

signed main()
{
    person a,b;
    a.age=19; b.age=21;
    cout<<"the sum of age of a and b is : "<<a+b;
    return 0;    
}
