// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w;cin>>w;
   while(w--)
   {
    int n;cin>>n;
      int arr[n];
       double sum=0;
       for(int i=0; i<n; i++)
       {
           cin>>arr[i];
           sum+=arr[i];
       }
     double k=*max_element(arr,arr+n);
       sum=(double)sum-k;
       double w=(double)sum/(double)(n-1);
      cout<<setprecision(9);
       cout<<(k+w)<<endl;
       
       
       
   }
    return 0;
}