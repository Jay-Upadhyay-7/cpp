//WAP in which you create a Student class having basic information for each student, like name, age and marks. By using friend function add marks of all the students and print it.


#include<iostream>
#include<string>
using namespace std;
class student{
  private:
      string name;
      char section;
      int marks;
   public:
  void setdata(){
        cout<<"enter student name, section , marks : "<<endl;
        cin>>name;
        cin>>section;
        cin>>marks;}
  friend void totalmarks(student a, student b , student c);
};
void totalmarks(student a,student b, student  c){
  cout<<a.marks+b.marks+c.marks<<endl;}
int main(){
student a,b,c;
a.setdata();
b.setdata();
c.setdata();
cout<<"total marks : "<<endl;
totalmarks(a,b,c);

 }
