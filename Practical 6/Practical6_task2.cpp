#include<iostream>
#include<string>
using namespace std;
int main(){
   string b="";
   cin>>b;
   int l=b.size()-1;
   for(int i=0;i<b.size()/2;i++){
     if(b[i]!=b[l--]){
       cout<<"not palindrome";
       return 0;
     }}
     cout<<"palindrome";
   
return 0;}
