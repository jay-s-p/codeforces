// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;cin>>n;
  while(n--)
  {
      int n; cin>>n;
      int arr[n];
      for(int i=0; i<n; i++)
      {
        cin>>arr[i];
      }
 
      int ans=arr[0]+arr[1]-1;
      for(int i=2; i<n; i++)
      {
        ans=ans+arr[i]-1;
      }
      if(n==1)
{
    cout<<arr[0]<<endl;
}else
      cout<<ans<<endl;
  }
    return 0;
}