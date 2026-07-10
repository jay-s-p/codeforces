#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr();
void jsr()
{
    long long n;cin>>n; int k; cin>>k;
    
  
    if(n==1 )
   
    {
        
         if(k==2)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;return;
    }
   if (k>1)
   {
       cout<<"NO"<<endl;return;
   }
   if(n==2 )
   {
       if(k==1)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       return;
   }
if(n%2==0)
{
    cout<<"NO"<<endl;return;
}
    for(int i=3 ; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<"NO"<<endl; return;
        }
    }
   
    cout<<"YES"<<endl;
  
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