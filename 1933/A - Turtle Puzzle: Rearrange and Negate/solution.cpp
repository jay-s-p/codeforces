// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
       int n; cin>>n;
       int arr[n];
       for(int i=0;i<n; i++)
       {
           cin>>arr[i];
       }
       long long sum=0;
       for(int i=0; i<n; i++)
       {
           sum+=abs(arr[i]);
           
       }
       cout<<sum<<endl;
      
       
   
    }
    return 0;
}