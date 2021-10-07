#include<iostream>
#include<string>
using namespace std;
int main()
{
 string a = "Hello";
 cout << &a;
 a[0] = 'J';
 cout << &a << endl;
 cout << a << endl;
 return 0;
}