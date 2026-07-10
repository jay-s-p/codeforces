// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w;cin>>w;
   while(w--)
   {
       long long n,k;cin>>n>>k;
       if(n>=k*k)
       {
           if(n%2==0 && k%2==0)
           {
               cout<<"YES"<<endl;
           }
           else if(n%2==1 && k%2==1)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
    return 0;
}