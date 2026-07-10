// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    {
        while(w--)
        {
            int k;cin>>k;
            int q=k%2020;
            k=k-q;
            int t;
            if(k%2020==0)
            {
                  t=k/2020;
            }
            if(q<=t)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
           
    }
    
    return 0;
}