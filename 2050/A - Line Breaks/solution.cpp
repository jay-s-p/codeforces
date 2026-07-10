#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr();
void jsr()
{
	int n,m;cin>>n>>m;
	vector<string>s(n);
	for(int i=0; i<n; i++)
	{
		cin>>s[i];
	}
	int ans=0;
	for(int i=0; i<n; i++)
	{
		if(s[i].size()<=m)
		{
			ans++;
			m-=s[i].size();
		}
		else
		{
			break;
		}
	}
	cout<<ans<<endl;
 
	
	
 
 
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
 