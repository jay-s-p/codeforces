// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int w; cin>>w;
   while(w--)
   {
       int n; cin>>n; int arr[n];
       for(int i=0;i<n; i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+n);
       int k=(arr[0]+arr[1])/2;
       for(int i=2; i<n; i++)
       {
        //   cout<<k<<" /";
           k=(k+arr[i])/2;
       }
       cout<<k<<endl;
   }
    return 0;
}