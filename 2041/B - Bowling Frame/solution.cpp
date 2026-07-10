#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
 
 
void jsr();
 
 
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
 
void jsr()
{
	ll a,b;
	cin>>a>>b;
	ll c=a+b;
 
	ll k=sqrt(c);
// cout<<"sdfgh"<<k<<endl;
	ll sm=c-(k*(k+1))/2;
// cout<<sm<<"ase3wsww"<<endl;
	ll i=k+1;
	while(i<=sm)
	{
		sm-=i;
		i++;
	}
	cout<<i-1<<endl;
	
 
 
}