#include<iostream>
int fact(int n){
 int k=1;
 while(n!=1){
   k=k*n;
   n--;}
   return k;}

using namespace std;
int main(){
int n;
cin>>n;
cout<<fact(n)<<endl;
return 0;}
