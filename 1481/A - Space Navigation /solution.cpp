// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        int x,y;cin>>x>>y;
        string s; cin>>s;
        int u=0;
        int d=0,r=0,l=0;
        for(int i=0; i<s.size();i++)
        {
            if(s[i]=='D')d++;
            if(s[i]=='U')u++;
            if(s[i]=='R')r++;
            if(s[i]=='L')l++;
        }
        if(x>=0 && y>=0)
        {
            if((abs(x)<=r) && abs(y)<=u)
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(x>=0 && y<=0)
        {
            if((abs(x)<=r) && abs(y)<=d)
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(x<=0 && y>=0)
        {
            // cout<<l;
            if((abs(x)<=l) && abs(y)<=u)
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(x<=0 && y<=0)
        {
            if((abs(x)<=l) && abs(y)<=d)
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
    return 0;
}