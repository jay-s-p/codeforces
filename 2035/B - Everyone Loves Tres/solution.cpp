/* SET
 
*/
typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
// #define int long long;
 
void solve();
 
int main()
{
    int w; cin>>w;
    while(w--)
    {
        solve();
    }
}
 
void solve()
{
    ll n;cin>>n;
    
    if(n==1 || n==3)
    {
        cout<<"-1"<<endl;return;
    }
    if(n%2==0)
    {
        for(int i=0; i<n-2; i++)
        {
            cout<<3;
        }
        cout<<66<<endl;
        return;
    }
    if(n%2==1)
    {
        for(int i=0;i<n-4; i++)
        {
            cout<<3;
        }
        cout<<6366<<endl;
        return;
    }
    
    
    
    
    
}