#include <iostream>
using namespace std;
void isPrime(int n) {
   int i, c= 0;
   for(i=2; i<=n/2; ++i) {
      if(n%i==0) {
         c=1;
         break;
      }
   }
   if (c==0)
   cout<<n<<" is a prime number"<<endl;
   else
   cout<<n<<" is not a prime number"<<endl;
}
int main() {
   int n;
   cout<<"enter any number "<<endl;
   cin>>n;
   isPrime(n);

   return 0;
}

