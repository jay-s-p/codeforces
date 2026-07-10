/*                 SET
 
*/
 
typedef long long ll;
// #define int long long;
#include<bits/stdc++.h>
using namespace std;
 
void jayshreeram();
 
int main()
{
    int w; cin>>w;
    while(w--)
    {
        jayshreeram();
    }
}
 
void jayshreeram()
{
    ll l,r;
    cin>>l>>r;
    ll k ; cin>>k;
    if(k==1)
    {
        cout<<r-l+1<<endl;
        return;
    }
    int ct=0;
    ll we=r/k;
    
ll ans=we-l+1;
if(ans<0)
{
    cout<<0<<endl;
}
else
{
    cout<<ans<<endl;
}
 
 
 
 
 
 
 
 
    
}