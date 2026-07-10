// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n;cin>>n;
        int x; cin>>x;
        
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        long long k=accumulate(arr.begin(), arr.end(), 0LL);
        long long qw=*max_element(arr.begin(), arr.end());
        
        long long cn=(k+x-1)/x;
        cout<<max(cn,qw)<<endl;
        
    }
    return 0;
}