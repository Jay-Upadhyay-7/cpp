#include<iostream>
int fact(int n){
 if(n==1){
  return 1;}
 else{
    return n*fact(n-1);}
}

using namespace std;
int main(){
int n;
cin>>n;
cout<<fact(n)<<endl;
return 0;}
