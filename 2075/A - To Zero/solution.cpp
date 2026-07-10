#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr();
void jsr()
{
    
    long long n,k,ct=0;cin>>n>>k;
 
    while(n>0)
    {
        if(n%2==0 )
        {
            if(n%(k-1)==0)
            {
                ct=ct+(n/(k-1));break;
            }
            else 
            {
                ct=ct+(n/(k-1))+1;break;
            }
            
        }
        else if(n%2==1 )
        {
            n=n-k;ct++;
        }
      
    }
    cout<<ct<<endl;
        
 
 
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
 