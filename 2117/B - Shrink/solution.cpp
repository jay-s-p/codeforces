#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr()
{
  int n; cin>>n;
  int arr[n];
  arr[0]=1; arr[n-1]=2;
  for(int i=1; i<n-1; i++)
  {
      arr[i]=i+2;
  }
  for(int i=0; i<n; i++)
  {
      cout<<arr[i]<<" ";
  }
  cout<<endl;
 
  
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int asd;cin>>asd;
    while(asd--)
    {
        jsr();
    }
 
    return 0;
}