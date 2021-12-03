#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int palindrome(string s,int b,int e){
    int k=(b+e)/2;
     if(k==b){
      if(s[b]!=s[e]){
        return 0;
      }}
    while(b!=k){
      if(s[b]!=s[e]){
          return 0;
      }
      b++;
      e--;
    }
    return 1;
}
int main(){
     string s;
     getline(cin,s);
     int b=0,e=0,i=0;
     int l=s.size();
     while(i!=l+1){
       if(s[i]==' '||s[i]=='\0'){
         if(palindrome(s,b,e-1)){
           int k=b;
           while(k!=e){
             s[k]='*';
             k++;
           }
         }
        b=i+1;
       }
       i++;
       e++;
     }
     cout<<s;
}
