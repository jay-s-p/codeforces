#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr()
{
 
int n; cin>>n;
string s;cin>>s;
 
int ct=0;
int ans=0;
for(int i=0; i<n; i++)
{
    if(s[i]=='1')ct++;
}
 
for(int i=0; i<n; i++)
{
    if(s[i]=='0')ans+=ct+1;
    else ans+=ct-1;
}
cout<<ans<<endl;
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