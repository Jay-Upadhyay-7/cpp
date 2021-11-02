
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