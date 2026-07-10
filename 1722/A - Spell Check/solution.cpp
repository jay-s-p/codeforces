// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        int k; cin>>k;
        string s; cin>>s;
        sort(s.begin(), s.end());
        // cout<<s<<endl;
        // string er=0;
        if(k==5 && s=="Timru")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}