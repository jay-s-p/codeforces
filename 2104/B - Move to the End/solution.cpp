#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr()
{
    long long n;cin>>n;
    long long arr[n];
    long long brr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    brr[0]=arr[0];
    for(int i=1; i<n; i++)
    {
        brr[i]=max(brr[i-1], arr[i]);
        // cout<<brr[i]<<" ";
    }
    // long long sum=*max_element(arr, arr+n);
    cout<<brr[n-1];
  long long  sum=0;
    
    for(int i=n-1; i>0;i--)
    {
        sum=sum+arr[i];
        cout<<" "<<sum+(max(arr[i-1], brr[i-1]));
        
       
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