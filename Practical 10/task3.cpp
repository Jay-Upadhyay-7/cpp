/*WAP to pass two variables in a parameterized constructor during object creation and have same names variables as class member data and constructor parameters. 
Your job is to calculate the remainder of those two numbers.*/

#include<iostream>
using namespace std;
class remainder
{
    private:
        int a;
        int b;
    public:
        remainder(int a,int b)
        {
            cout<<a%b;
        }
};
int main()
{
    int a=10,b=4;
    remainder r(a,b);
    return 0;
}
