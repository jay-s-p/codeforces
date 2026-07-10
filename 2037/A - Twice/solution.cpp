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
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int ct=0;
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]==arr[i+1])
		{
			ct++;i++;
		}
	}
	cout<<ct<<endl;
}