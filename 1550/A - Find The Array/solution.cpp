// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w; cin>>w;
   while(w--)
   {
       int n;cin>>n;
       int sum=0,i=1,ct=0;
       while(n>sum)
       {
           sum+=i;
           i+=2;
           ct++;
       }
       cout<<ct<<endl;
       
   }
 
    return 0;
}