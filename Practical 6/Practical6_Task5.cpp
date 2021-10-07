#include<iostream>
#include<string>
using namespace std;
int main(){

     string a="";
     string b="";
     getline(cin,a);
     getline(cin,b);
     if(a.compare(b)==0){
         cout<<"equal string "<<endl;}
     else if(a.compare(b)>0){
         cout<<"String a = "<< a <<"  is greater then b= "<< b <<endl;}
      else{
         cout<<"string b = "<< b <<" is greater then a= "<< a <<endl;}

     return 0;

}
