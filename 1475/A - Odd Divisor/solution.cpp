// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w; cin>>w;
    while(w--)
    {
        long long a;
        cin>>a;
        while(a%2==0)
        {
            a/=2;
        }
        if(a==1)cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}