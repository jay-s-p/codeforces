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
jsr();
	// int qwemnb; cin>>qwemnb;
	
	// while(qwemnb--)
	// {
	// 	jsr();
	// }
 
	return 0;
}
 
void jsr()
{
	int arr[4];
	for(int i=0; i<4; i++)cin>>arr[i];
 
	sort(arr,arr+4);
		if(arr[0]!=1)
		{
			cout<<1<<endl;
		}
		else if(arr[1]!=2)
		{
			cout<<2<<endl;
		}
		else if(arr[2]!=3)
		{
			cout<<3<<endl;
		}
		else if(arr[3]!=4)
		{
			cout<<4<<endl;
		}
		else
 
 
		{
			cout<<5<<endl;
		}
	
 
 
}