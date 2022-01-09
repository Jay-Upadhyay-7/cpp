#include<iostream>

using namespace std;

double divide(int x,int y)
{

try{ 

if(y==0)

throw "Arithematic Error: Division By zero condition!!!\n"; 

} 

catch(const char *m)

{

throw;

} 

} 

int main()
{
int a=10,b=0;

double z;

try{ 

z=divide(a,b);

cout<<z<<endl;

} 

catch(const char *m)

{

cout<<m<<endl;

} 

return 0;

}
