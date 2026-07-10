#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr()
{
    int n; cin>>n;
    int arr[n],brr[n];
    int e=0, o=0,same=0;
    for(int i=0; i<n ; i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
        if(arr[i]%2==0)
        {
            e++;
        }
        else o++;
    }
    sort(brr, brr+n);
    int l=brr[0]; int k=brr[n-1];
    if(l==k)
    {
        cout<<"NO"<<endl;return;
    }
    int s=brr[n-1];
    if(e==0  || o==0)
    {cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==s)
            {
                cout<<2<<" ";
            }
            else cout<<1<<" ";
        }
        cout<<endl;return;
    }
    cout<<"YES"<<endl;
     for(int i=0; i<n ; i++)
    {
        
        
        if(arr[i]%2==0)
        {
            cout<<1<<" ";
        }
        else cout<<2<<" ";
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