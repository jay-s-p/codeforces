// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--)
    {
        int k; cin>>k;
        int r;cin>>r;
        int w=r/2;
        if(k>w)
        {
            cout<<r-k<<endl;
        }
        else 
        {
            cout<<r%(w+1)<<endl;
        }
        
    }
    return 0;
}