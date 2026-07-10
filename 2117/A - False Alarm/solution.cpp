#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr()
{
  int n,x,l=0,r=0,ct=0; cin>>n>>x;
  int arr[n];
  for(int i=0; i<n; i++)
  {
      cin>>arr[i];
      if(ct==0 && arr[i]==1 )
      {
          l=i;
      }
  }
  for(int i=n-1; i>=0 ;i--)
  {
      if(arr[i]==1){r=i;break;}
  }
  for(int i=0; i<n ;i++)
  {
      if(arr[i]==1){l=i;break;}
  }
  if((r-l+1)<=x)cout<<"YES"<<endl;
  else cout<<"no"<<endl;
  
}
 
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    int asd;cin>>asd;
    while(asd--)
    {
        jsr();
    }
 
    return 0;
}