typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
 
void jayshreeram()
{
    ll n,b,c;
    cin>>n>>b>>c;
    if(b==0)
    {
        if(n-2==c || n-1==c)
        {
            cout<<n-1<<endl;
        }
        else if(c<n-2)
        {
           cout<<-1<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
        return;
    }
   ll ans = n-max((n-c+b-1)/b, 0ll);
   cout<<ans<<endl;
    
}
 
int main()
{
    int w; cin>>w;
    while(w--)
    {
        jayshreeram();
    }
}
 