// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        int k; cin>>k;
        string s; cin>>s;
        string t;cin>>t;
        int ct=0;
        for(int i=0;i<k; i++)
        {
            if(s[i]=='R' && t[i]=='B')ct++;
            if(s[i]=='R' && t[i]=='G')ct++;
            if(s[i]=='B' && t[i]=='R')ct++;
            if(s[i]=='G' && t[i]=='R')ct++;
            
        }
        if(ct>0)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}