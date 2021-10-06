#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int strcomp(string a, string b){
    if(a.size()==b.size()){
       for(int i=0;i<a.size();i++){
           if(a[i]!=b[i]){
              return 0;}
    
    }
    return 1;}
    else return 0;}

int main(){
   string  a="";
   string b="";
   cout<<"enter 1st string   :"<<endl;
   getline(cin,a);
   
   cout<<"enter 2nd string   :"<<endl;
    getline(cin,b);
   
   cout<<(strcomp(a,b)?"equal string":"Not equal")<<endl;
   

   
return 0;}
