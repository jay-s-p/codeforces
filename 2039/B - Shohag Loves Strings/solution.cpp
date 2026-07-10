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
	string s; cin>>s;
 
	int n=s.size(); 
	
	
	if(n==1)
	{
		cout<<-1<<endl;
 
	}
	else if(n==2)
	{
		if(s[0]==s[1])
		{
			cout<<s<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
	else
	{
		int p=-1;
		for(int i=0; i<n-1; i++)
		{
			if(s[i]==s[i+1])
			{
				p=i;break;
			}
		}
		if(p!=-1)
 
		{
			cout<<s[p]<<s[p+1]<<endl;return;
		}
		else
		{
			for(int i=0; i<n-2; i++)
			{
				if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2])
				{
					p=i; break;
				}
			}
			if(p!=-1)
			{
				cout<<s[p]<<s[p+1]<<s[p+2]<<endl;return;
			}
			else cout<<-1<<endl;
		}
 
	}
 
}