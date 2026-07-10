// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w; cin>>w;
   while(w--)
   {
       int a;cin>>a;
       vector<long long>arr(a);
       for(int i=0; i<a; i++)
       {
           cin>>arr[i];
       }
       long long sum=0;
       for(int i=0; i<a-2; i++)
       {
           sum+=arr[i];
       }
       cout<<arr[a-1]-arr[a-2]+sum<<endl;
       
   }
 
    return 0;
}