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
    ll x,y,k;cin>>x>>y>>k;
    if(k<=x && k<=y)
    {
        cout<<0<<" "<<0<<" "<<k<<" "<<0<<endl;
        cout<<0<<" "<<0<<" "<<0<<" "<<k<<endl;
        
    }
    else
    {
        cout<<0<<" "<<0<<" "<<min(x,y)<<" "<<min(x,y)<<endl;
        cout<<0<<" "<<min(x,y)<<" "<<min(x,y)<<" "<<0<<endl;
    }
 
 
 
 
 
 
    
}