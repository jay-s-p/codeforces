// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
  int w;cin>>w;
  while(w--)
  {
      int n,i;cin>>n;
      int arr[n];
      for(int i=0; i<n; i++)cin>>arr[i];
      int ans=0;
      for( i=n-2; i>=0; i--)
      {
          if(arr[i+1]==0)break;
          while(arr[i]>=arr[i+1])
          {
              arr[i]/=2;
              ans++;
          }
      }
      if(i>=0) cout<<"-1
";
      else cout<<ans<<"
";
  }
 
    return 0;
}