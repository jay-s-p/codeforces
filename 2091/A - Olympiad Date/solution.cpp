#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr();
void jsr()
{int n;cin>>n;
 
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  int z=0,o=0,t=0,f=0,th=0;
  for(int i=0; i<n; i++)
  {
   
    if(arr[i]==0)z++;
    if(arr[i]==1)o++;
    if(arr[i]==2)t++;
    if(arr[i]==5)f++;
    if(arr[i]==3)th++;
     if(z>=3 && o>=1 && t>=2 && f>=1 && th>=1 )
    {
        cout<<i+1<<endl; return;
    }
  }
  cout<<0<<endl; return;
 
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
 