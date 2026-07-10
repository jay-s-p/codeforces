// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n;cin>>n;
        string s; cin>>s;
        long long ct=0;
        for(int i=0; i<n-2; i++)
        {
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')
            {
                s[i+2]='z';
                ct++;
            }
            if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e')
            {
                ct++;
            }
        }
        cout<<ct<<endl;
    }
 
    return 0;
}