#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
   string  a="";
   string b="";
   cout<<"enter 1st string   :"<<endl;
   getline(cin,a);
   
   cout<<"enter 2nd string   :"<<endl;
    getline(cin,b);
   
   cout<< (a.compare(b)?"String Not equal":"String equal")<<endl;

   
return 0;}
