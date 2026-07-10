// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n;cin>>n;
        int r; cin>>r;
        
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int k=accumulate(arr.begin(), arr.end(), 0);
        int h=0;
        int rl=0;
        int uh=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==1)
            {
                
                uh++;
            }
            
        }
        rl=r-k/2;
        if(k%2==1)
            {
                uh--;rl--;
            }
        // rl=rl/2;
        while(rl-- && uh>0)
        {
            uh-=2;
        }
        cout<<k-uh<<endl;
    }
    return 0;
}