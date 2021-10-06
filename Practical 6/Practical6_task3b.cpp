#include<iostream>
#include<string>
using namespace std;
void reverse(string b){
     string rev="";
     for(int i=0;i<b.size();i++){
     
       rev=b[i]+rev;}
       cout<<"reverse string is :"<<rev<<endl;

}
int main(){
   string b="";
   getline(cin,b);
   cout<<"original string is :"<<b<<endl;
   reverse(b);

   
return 0;}
