// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
       ll x,y,a;
       cin>>x>>y>>a;
       ll k,l;
       
           k=(x+a-1)/a;
          
      
           l=(y+a-1)/a;
           if(k>l)cout<<k*2-1<<endl;
           else
           cout<<l*2<<endl;
       
       
    }
    return 0;
}