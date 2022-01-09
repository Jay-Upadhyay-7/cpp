#include<iostream>

using namespace std;

template <typename T1,typename T2,typename T3> 

T1 add(T2 x,T3 y)

{

return (x+y);

} 

int main()

{

cout<<"Adding 2 integer: "<<add<int>(1,2)<<endl;

cout<<"Adding integer and float: "<<add<double,int,float>(1,2.3)<<endl; 

return 0; 

}
