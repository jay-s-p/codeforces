#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr();
void jsr()
{
    long long n,k,x;cin>>n>>k>>x;
    long long ttl=n*k;
    vector<long long>arr(n);
    long long ct=0,sum=0; 
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        
    }
    int ctt=0;
    for(int i=n-1; i>=0; i--)
    {
        sum+=arr[i];ctt++;
        if(sum>=x && ct==0)
        {
            ct=ctt;
        }
    }
    // cout<<ct<<endl;
    if(x==k*sum)
    {
        cout<<1<<endl;return;
    }
       if(x>k*sum)
       {
        cout<<0<<endl;return;
       }
    if(ct==0)
    {
        if(x%sum==0)
        {
            ct=n*(x/sum);
 
        }
        else
        {
            ct=n*(x/sum);
            // cout<<ct<<endl;
            // cout<<x/sum<<endl;
            long long asd=x-(sum*(x/sum));
            // cout<<asd<<endl;
             // cout<<ct<<endl;
            int cttt=0;
            for(int i=n-1; i>=0; i--)
            {
                // cout<<asd<<endl;
                asd-=arr[i];cttt++;
                // cout<<asd<<endl;
                if(asd<0 ||asd==0)
                {
                    ct=ct+cttt;
                   break;
 
                }
                // cout<<ct<<endl;
            }
            // cout<<asd<<endl;
        }
 
    }
    cout<<ttl-ct+1<<endl;
 
 
 
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
 