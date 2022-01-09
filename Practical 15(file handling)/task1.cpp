#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream abc;
  abc.open("first.txt");
  abc<<"welcome to the file handling ";
  abc.close();
  ifstream bcd;
  string ch;
  bcd.open("first.txt");
  while (getline (bcd, ch)) {
  cout << ch;
}
bcd.close();
return 0;
}
