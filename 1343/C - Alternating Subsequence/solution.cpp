// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int w;cin>>w;
   while(w--)
   {
       int n ;cin>>n;
       vector<long long> arr(n);
       for(int i=0; i<n ;i++)
       {
           cin>>arr[i];
       }
       long long ans=0;
       for(int i=0; i<n; i++)
       {
           int j=i;
         long long maxi=-2e10;
           while(j<n && ((arr[j]<0 && arr[i]<0) || (arr[j]>0 && arr[i]>0)))
           {
               maxi=max(maxi,arr[j]);
               j++;
           }
           ans+=maxi;
           i=j-1;
       }
       cout<<ans<<endl;
   }
 
    return 0;
}