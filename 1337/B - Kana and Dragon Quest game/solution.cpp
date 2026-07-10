// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    {
        while(w--)
        {
            int x,n,m;
            cin>>x>>n>>m;
            int k=m*10;
            while(x>20 && n>0)
            {
                x=x/2;
                x=x+10;
                n--;
            }
            if(x<=k)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
           
    }
    
    return 0;
}