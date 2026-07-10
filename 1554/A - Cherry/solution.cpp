// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w; cin>>w;
   while(w--)
   {
       int n;cin>>n;
       int arr[n];
       for(int i=0; i<n ; i++)cin>>arr[i];
       
       long long pro=0;
       for(int i=0; i<n-1; i++)
       {
           long long prod=static_cast<long long>(arr[i])*arr[i+1];
           if(prod>pro)
           {
               pro=prod;
           }
       }
       cout<<pro<<endl;
   }
 
    return 0;
}