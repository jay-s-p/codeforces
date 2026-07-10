// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w; cin>>w;
   while(w--)
   {
       int n;cin>>n;
       int arr[n];
       for(int i=0; i<n; i++)cin>>arr[i];
       int ct=0;
       sort(arr,arr+n);
       for(int i=0; i<n-1; i++)
       {
           if(abs(arr[i+1]-arr[i])>1)
           {
               ct++;
               break;
           }
       }
       if(ct==1)cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
       
       
   }
 
    return 0;
}