#include<iostream>
#include<string>
using namespace std;
struct student
{
    string name;
    int age,marks;
    student(string n,int a,int m)
    {
        name=n;
        age=a;
        marks=m;
    }
};

class collage
{
public:
    string student_name;
    int student_id;
    int roll_no;
    collage(string s,int f,int c)
    {
        student_name=s;
        student_id=f;
        roll_no=c;
    }
};
int main()
{
    student s1=student("ratan shree",123,68); collage c1=collage("rakesh",67678,12);
    cout<<"student INFO:\n"<<s1.name<<endl<<"age: "<<s1.age<<" marks: "<<s1.marks<<endl<<endl;
    cout<<"collage INFO:\n"<<"student name: "<<c1.student_name<<endl<<"student id: "<<c1.student_id<<endl<<"roll_no "<<c1.roll_no;
return 0;
}