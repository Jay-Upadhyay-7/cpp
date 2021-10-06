#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string b="";
   cin>>b;
   cout<<"original string is :"<<b<<endl;
   reverse(b.begin(),b.end());
   cout<<"reverse string is : "<<b<<endl;

   
return 0;}
