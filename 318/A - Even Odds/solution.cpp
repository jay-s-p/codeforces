// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   long long n,k,a;
   cin>>n>>k;
   a=(n+1)/2;
   if(k<=a)
   {
       cout<<(k*2)-1;
   }
   else
   
   {
       k=k-a;
       cout<<k*2;
   }
    return 0;
}