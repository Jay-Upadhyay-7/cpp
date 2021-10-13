#include<iostream>
using namespace std;
int main(){
int n=3,m=3;
int a[n][m]={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0;i<n/2;i++){
  if(i!=n-1-i){
  for(int j=0;j<m;j++){
       int temp=a[i][j];
       a[i][j]=a[2-i][2-j];
       a[2-i][2-j]=temp;}}
  else{
  for(int j=0;j<m/2;j++){
       int temp=a[i][j];
       a[i][j]=a[2-i][2-j];
       a[2-i][2-j]=temp;}}}

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cout<<a[i][j]<<" ";}

    cout<<endl;}

return 0;}
