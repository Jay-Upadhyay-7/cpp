#include<iostream>
#include<string>
using namespace std;
int main(){

     string a="";
     string b="";
     getline(cin,a);
     getline(cin,b);
     if(a.compare(b)==0){
         cout<<"equal string "<<endl;
         cout<<"value returned by function compare is: "<<a.compare(b)<<endl;}
     else if(a.compare(b)>0){
         cout<<"String a = "<< a <<"  is greater then b= "<< b <<endl;
         cout<<"value returned by function compare is: "<<a.compare(b)<<endl;}
      else{
         cout<<"string b = "<< b <<" is greater then a= "<< a <<endl;
         cout<<"value returned by function compare is: "<<a.compare(b)<<endl;}

     return 0;

}
