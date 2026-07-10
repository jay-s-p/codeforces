// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        long long int n; cin>>n;long long int k; cin>>k;
        long long int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        if(k<=n)
        {
            cout<<k<<endl;continue;
        }
        sort(arr,arr+n);
            int subtract=0;
            int p=0;
            long long ans=k;
            for(int i=0; i<n; i++)
            {
                arr[i]-=subtract;
                k-=min(k,(n-i)*arr[i]);
                if(k==0)break;
                else ans++;
                
                subtract+=arr[i];
            }
            cout<<ans<<endl;
            
     
        
    }
    return 0;
}