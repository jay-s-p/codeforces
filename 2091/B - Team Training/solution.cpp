#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr();
void jsr()
{int n;cin>>n;int m; cin>>m;
 
 
 vector<long long>arr(n);
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end(), greater<int>());
  // for(int i=0; i<n; i++)cout<<arr[i]<<" ";cout<<endl;
 
  int ans=0;
 
  int ct=0;
 
  for(int i=0; i<n; i++)
  {
    
    if(arr[i]>=m)
    {
        ans++;continue;
    }
    ct++;
    if(arr[i]*ct>=m)
    {
        
        ans++;ct=0;continue;
    }
    
 
  }
  cout<<ans<<endl;
 
 
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
// jsr();
    int qwemnb; cin>>qwemnb;
    
    while(qwemnb--)
    {
        jsr();
    }
 
    return 0;
}
 