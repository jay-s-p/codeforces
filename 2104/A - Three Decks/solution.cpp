#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr()
{
long long a,b,c,d;cin>>a>>b>>c;
d=a+b+c;
if(d%3==0)
{
    if( (d/3) >= b   )
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
}
else 
{
    cout<<"NO"<<endl;
}
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