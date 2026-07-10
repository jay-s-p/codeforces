#include <iostream>
using namespace std;
int main() {
   long long n,m,a;
   cin>>n>>m>>a;
   long long y=0;
   while(m>0)
   {
       long long x;
       if(n%a==0){
        x=n/a;
   }
   else if(n%a!=0){
        x=n/a;
        x=x+1;
   }
   y=y+x;
   m=m-a;
   }
   
   cout<<y;
 
    return 0;
}