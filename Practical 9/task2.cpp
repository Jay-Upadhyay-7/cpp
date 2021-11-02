/* WAP to create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function 
for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square has one
parameter which is the side of the square. Use multiple constructors to for the initialization */
#include<iostream>
using namespace std;
class findarea{
  public:
      int side;
      int length;
      int breadth;
     findarea(int a){
          side=a;}
     findarea(int p,int q){
          length=p;
          breadth=q;}
     void area(int s){
          int ar=side*side;
          cout<<"area of square: "<<ar<<endl;}
     void area(int length,int breadth){
          int ar=length*breadth;
          cout<<"area of rectangle : "<<ar<<endl;}
};
int main(){
   findarea a(5),b(5,7);
   a.area(a.side);
   b.area(b.length,b.breadth);
   return 0;}
   
