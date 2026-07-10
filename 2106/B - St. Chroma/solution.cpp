#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr()
{
 
int n; cin>>n;
int m;cin>>m;
int arr[n];
int ct=0;
if(n==1)
{
    cout<<0<<endl;return;
}
if(m>=n)
{
        for(int i=0; i<n; i++)
        {
        cout<<i<<" ";
        }
        cout<<endl;return;
}
for(int i=0; i<n; i++)
{
    if(i==m)
    {
        arr[i]=i+1;ct++;
    }
    else if(ct>0) arr[i]=i+1;
    else arr[i]=i;
}
arr[n-1]=m;
 
for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
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