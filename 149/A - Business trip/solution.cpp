// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int k;cin>>k;
   
   vector<int>arr(12);
   for(int i=0; i<12; i++)
   {
       cin>>arr[i];
   }
   if(k==0)
   {
       cout<<0; return 0;
   }
   sort(arr.begin(), arr.end(),greater<int>());
   int sum=0;
   int ct=0;
//   cout<<ct;
   for(int i=0; i<12; i++)
   {
       if(sum>=k)
       {
       }
       else{
           ct++;
           sum+=arr[i];
       }
       
   }
   if(sum>=k)
   {
       cout<<ct;
   }
   else
   {
       cout<<-1;
   }
 
           
   
    return 0;
}