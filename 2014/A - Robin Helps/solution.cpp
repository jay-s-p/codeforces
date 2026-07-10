#include <bits/stdc++.h>
using namespace std;
int main() {
  int w;cin>>w;
  for(int j=1; j<=w; j++)
  {
      int n,k;
      cin>>n>>k;
      vector<int>arr(n);
      for(int i=0; i<n; i++)
      {
          cin>>arr[i];
      }
      int ct=0;
      int ctt=0;
      for(int i=0; i<n; i++)
      {
          if(arr[i]>=k)
          {
              ct+=arr[i];
          }
          else if(arr[i]==0 && ct>0)
          {
              ct--;ctt++;
          }
        //   cout<<ctt<<" "<<ct<<" ";
      }
      cout<<ctt<<endl;
      
  }
    return 0;
}