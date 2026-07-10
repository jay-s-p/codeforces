// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w;cin>>w;
   while(w--)
   {
       int n;cin>>n;
       int c1=0;
       int c2=0;
       if(n%3==1)c1++;
       if(n%3==2)c2++;
       int k=n/3;
       cout<<c1+k<<" "<<c2+k<<endl;
   }
    return 0;
}