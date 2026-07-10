#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr();
void jsr()
{
    
    int n; cin>>n;
    int m;cin>>m;
int we=1;
    vector<int>arr(n,0);
    for(int i=0 ;i<n;i++)
    {
        if(i==(m*we)-1)
        {
            arr[i]=we;we++;
        }
    }
    for(int i=0 ;i<n;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=we;we++;
        }
    }
    for(int i=0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        
 
 
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
 