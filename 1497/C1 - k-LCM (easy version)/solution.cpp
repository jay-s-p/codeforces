// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n; cin>>n; int k; cin>>k;
        if(n%2==0 && (n/2)%2==0)
        {
            cout<<(n/2)<<" "<<(n/2)/2<<" "<<(n/2)/2<<endl;
        }
        else if(n%2==0 && (n/2)%2==1)
        {
            cout<<(n/2)-1<<" "<<(n/2)-1<<" "<<2<<endl;
        }
        else
        {
            cout<<(n/2)<<" "<<(n/2)<<" "<<1<<endl;
        }
        
    }
}