// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        int a,b; cin>>a>>b;
        if(a>=b)
        {
            cout<<a<<endl;continue;
        }
        if(a==1 && b>1)
        {
            cout<<0<<endl; continue;
        }
        int k=(b-a)*2;
        int as=b-k;
        if(as<=0)
        {
            cout<<0<<endl;
        }
        else 
        {
            cout<<as<<endl;
        }
    }
    return 0;
}