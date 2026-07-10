#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr();
void jsr()
{
    int n;cin>>n;
    int arr[n];
    string s; cin>>s;
int l=1; int r=n;
    for(int i=n-2; i>=0; i--)
    {
        if(s[i]=='<')
        {
            arr[i+1]=l;l++;
        }
        if(s[i]=='>')
        {
            arr[i+1]=r; r--;
        }
    }
    arr[0]=l;
 
   for(int i=0; i<n; i++)
   {
    cout<<arr[i]<<" ";
   }cout<<endl;
 
 
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