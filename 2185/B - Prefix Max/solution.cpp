#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;cin>>n;
	while(n--)
	{
	    int a;cin>>a;
	    int arr[a];
	    long long max =0;
	    for(int i=0; i<a; i++)
	    {
	        cin>>arr[i];
	        if(arr[i]>max)max=arr[i];
	    }
	    cout<<max*a*1ll<<endl;
	}
 
}