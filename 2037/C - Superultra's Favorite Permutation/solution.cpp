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
 
	int qwemnb; cin>>qwemnb;
	
	while(qwemnb--)
	{
		jsr();
	}
 
	return 0;
}
 
void jsr()
{
	
	int n; cin>>n;
	if(n<=4)
	{
	    cout<<-1<<endl;return;
	}
	for(int i=1; i<=n; i+=2)
	{
	    if(i==5)continue;
		cout<<i<<" ";
	}
	int m=n;
	cout<<5<<" "<<4<<" ";
	if(n%2==1)
	{
		m=n-1;
	}
	for(int i=m; i>0; i-=2)
	{
	    if(i==4)continue;
		cout<<i<<" ";
	}
	cout<<endl;
 
}