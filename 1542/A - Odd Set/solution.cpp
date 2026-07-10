// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w;cin>>w;
   while(w--)
   {
       int n;cin>>n;
       int ar[2*n];
       int ct=0;
       for(int i=0; i<2*n; i++)
       {
           cin>>ar[i];
           {
               if(ar[i]%2==0)ct++;
           }
       }
       if(ct==n)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }
       
       
   }
    return 0;
}