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
    ll n,m,r,c;cin>>n>>m>>r>>c;
    cout<<(n-r)*m+(m-c)+(m-1)*(n-r)<<endl;
}