#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   for(int i=0; i<n; i++)
   {
    //   int counter=0;
       int k,q;
       cin>>k>>q;
       int arr[k];
       for(int j=0; j<k; j++)
       {
           cin>>arr[j];
       }
       sort(arr, arr+k);
       int a=arr[0];
    //   cout<<a<<endl;
       int brr[q];
       for(int j=0; j<q; j++)
       {
           cin>>brr[j];
       }
       
       
       for(int j=0; j<q; j++)
       {
           if(a>brr[j]){
               cout<<brr[j]<<" ";
           }
           else if(brr[j]>=a){
              cout<<a-1<<" ";
           }
           
           
       }
       cout<<endl;
       
       
   }
    return 0;
}