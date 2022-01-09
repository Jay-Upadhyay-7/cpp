#include<iostream>

#include<string>

#include<istream>

#include<sstream> 

#include<iomanip>

using namespace std;

int main()

{

int d=100; 

string s=" LOKARLOBAT";

cout<<"hexadecimal: "<<hex<<d<<endl;

cout<<"Decimal: "<<dec<<d<<endl;



string t;

istringstream iss1(" NATURE "); 

istringstream iss2(" NATURE"); 

istringstream iss3(" ITSME "); 

iss1>>noskipws>>t;

cout<<"noskipws: "<<t<<endl;

iss2>>skipws>>t;

cout<<"skipws: "<<t<<flush;

iss3>>ws>>t; 

cout<<"WS: "<<t<<ends;;


double f=3.1547895;

cout<<"Using endl:"<<"Abc "<<endl;

cout<<"Using ends:"<<"Abc "<<ends; //only clear buffered go to next line

cout<<"Using flush:"<<"Abc "<<flush<<endl;

cout<<"Using setprecision(5)="<<setprecision(5)<<f<<endl;

cout<<"Using setw(8)="<<setw(8)<<12345678945<<endl;
}
