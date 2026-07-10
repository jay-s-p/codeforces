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
	
	
	cout<<2<<" ";
 
	for(int i=1; i<n;i++)
	{
		cout<<2*i+1<<" ";
	}
	cout<<endl;
 
}