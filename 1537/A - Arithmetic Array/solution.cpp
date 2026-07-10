// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w;cin>>w;
   while(w--)
   {
       int n;cin>>n;
       int ar[2*n];
       long long int ct=0;
       for(int i=0; i<n; i++)
       {
           cin>>ar[i];
           ct=ct+ar[i];
          
           
       }
       if(ct>=n)
       {
           cout<<ct-n<<endl;
       }
       else
       {
           cout<<1<<endl;
       }
       
       
   }
    return 0;
}