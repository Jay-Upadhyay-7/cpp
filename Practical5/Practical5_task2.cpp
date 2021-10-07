#include<iostream>
using namespace std;
void charFunction(){
  cout<<"char Function value : ";
  char a='A';
  cout<<a<<endl;
  cout<<"size of a : "<<sizeof(a)<<endl;
  cout<<"size of char : "<<sizeof(char)<<endl;
}
void boolFunction(){
  cout<<"Bool Function value : ";
  int b=7;
  bool a=(b>5);
  cout<<a<<endl;
  cout<<"size of a : "<<sizeof(a)<<endl;
  cout<<"size of int : "<<sizeof(int)<<endl;
}
void shortFunction(){
  cout<<"short Function value : ";
  short a;
  cout<<a<<endl;
  cout<<"size of a : "<<sizeof(a)<<endl;
  cout<<"size of short : "<<sizeof(short)<<endl;
}
void intFunction(){
  cout<<"int Function value : ";
  int a;
  cout<<a<<endl;
  cout<<"size of a : "<<sizeof(a)<<endl;
  cout<<"size of int : "<<sizeof(int)<<endl;
}
void longFunction(){
  cout<<"long Function value : ";
  long a=8568586;
  cout<<a<<endl;
  cout<<"size of a : "<<sizeof(a)<<endl;
  cout<<"size of long : "<<sizeof(long)<<endl;
}
void floatFunction(){
  cout<<"float Function value : ";
  float a=7.797f;
  cout<<a<<endl;
  cout<<"size of a : "<<sizeof(a)<<endl;
  cout<<"size of float : "<<sizeof(float)<<endl;}


void doubleFunction(){
   cout<<"double Function value : ";
  double a=9.5685;
  cout<<a<<endl;
  cout<<"size of a : "<<sizeof(a)<<endl;
  cout<<"size of double: "<<sizeof(double)<<endl;
}
void longdoubleFunction(){
  cout<<"long double Function value : ";
  long double a=7878907986588559.858484;
  cout<<a<<endl;
  cout<<"size of a : "<<sizeof(a)<<endl;
  cout<<"size of long double : "<<sizeof(long double)<<endl;
}
void widecharFunction(){
  cout<<"wchar Function value : ";
  wchar_t a=L'\0';
  cout<<a<<endl;
  cout<<"size of a : "<<sizeof(a)<<endl;
  cout<<"size of widechar : "<<sizeof(wchar_t)<<endl;
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
