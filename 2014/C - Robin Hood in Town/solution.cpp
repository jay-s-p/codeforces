// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n;cin>>n;
        vector<ll >arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];
        
        if(n<3)
        {
            cout<<-1<<endl;continue;
        }
        sort(arr.begin(), arr.end());
       ll k=(n/2)+1;
       
       ll sum =1ll* accumulate(arr.begin(),arr.end(),0ll);
        ll ans=(long long)((arr[k-1]*n*2)+1)-sum;
       
        if((ans)<0)
        {
            // cout<<"VGHJ";
            cout<<0<<endl;
        }
        else
        {
            cout<<ans<<endl;
            
        }
        
    }
    return 0;
}