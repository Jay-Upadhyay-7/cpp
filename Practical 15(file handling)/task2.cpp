#include<iostream>
#include<fstream>
using namespace std;
int main(){
  fstream abc;
  abc.open("first.txt",ios::in);
  if(!abc){
    cout<<"File not exist ";
  }
  else{
    char ch;
    while(!abc.eof()){
      abc>>noskipws>>ch;
      cout<<ch<<endl;
    }
    abc.close();
  }
  string ch;
  abc.open("first.txt",ios::out);
  abc<<"writing ";
  abc.close();
  abc.open("first.txt",ios::app);
  abc<<"append ";
  abc.close();
return 0;
}
