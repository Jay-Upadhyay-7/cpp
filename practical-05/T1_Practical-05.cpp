#include<iostream>
using namespace std;
void charFunction(){
  cout<<"char Function value : ";
  char a='A';
  cout<<a<<endl;
}
void boolFunction(){
  cout<<"Bool Function value : ";
  int a=7;
  bool b=(a>5);
  cout<<b<<endl;
}
void shortFunction(){
  cout<<"short Function value : ";
  short a;
  cout<<a<<endl;
}
void intFunction(){
  cout<<"int Function value : ";
  int a;
  cout<<a<<endl;
}
void longFunction(){
  cout<<"long Function value : ";
  long a=8568586;
  cout<<a<<endl;
}
void floatFunction(){
  cout<<"float Function value : ";
  float a=7.797f;
  cout<<a<<endl;
}
void doubleFunction(){
   cout<<"double Function value : ";
  double a=9.5685;
  cout<<a<<endl;
}
void longdoubleFunction(){
  cout<<"long double Function value : ";
  long double a=7878907986588559.858484;
  cout<<a<<endl;
}
void widecharFunction(){
  cout<<"wchar Function value : ";
  wchar_t a=L'\0';
  cout<<a<<endl;
}
int main(){
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
