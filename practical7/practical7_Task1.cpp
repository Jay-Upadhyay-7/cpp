#include<iostream>
using namespace std;
int main(){
int c;
cout<<"enter your choice 1 for year \n 2 for month \n 3 for date: "<<endl;
cin>>c;
switch(c){
    case 1:
       cout<<"Current year: 2021"<<endl;
       break;
    case 2:
       cout<<"Current month: october"<<endl;
       break;
    case 3:
       cout<<"Current date: 13"<<endl;
       break; 
     default:
       cout<<"wrong choice"<<endl;
       break;}

return 0;}
