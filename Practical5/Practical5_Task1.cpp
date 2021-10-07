#include<iostream>
using namespace std;
void charFunction()
{
cout<<"char function value:";
 char a='A';
 cout<<a<<endl;
}
void boolFunction()
{
cout<<"bool function value:";
 bool b=(12>5);
 cout<<b<<endl;
}
void shortFunction()
{
cout<<"short function value:";
 short a=56;
 cout<<a<<endl;
}
void intFunction()
{
cout<<"int function value:";
 int a=58923457;
 cout<<a<<endl;
}
void longFunction()
{
cout<<"long function value:";
 long a=65858587651;
 cout<<a<<endl;
}
void floatFunction()
{
cout<<"float function value:";
 float a=1.234f;
 cout<<a<<endl;
}
void doubleFunction()
{
cout<<"double function value:";
 double a=1.2367894;
 cout<<a<<endl;
}
void longdoubleFunction()
{
cout<<"longdouble function value:";
 long double a=2^80;
 cout<<a<<endl;
}
void widecharFunction()
{
cout<<"widechar function value:";
 wchar_t a=L'\0';
 cout<<a<<endl;
}
int main()
{
 charFunction();
 boolFunction();
 shortFunction();
 intFunction();
 longFunction();
 floatFunction();
 doubleFunction();
 longdoubleFunction();
 widecharFunction();
 return 0;
}