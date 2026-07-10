// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int brr[n];
        for(int i=0; i<n; i++)cin>>brr[i];
        int ct=0;
        int crr[m];
        for(int i=0; i<m; i++)
        cin>>crr[i];
        for(int i=0; i<n ;i++)
        {
            for(int j=0; j<m; j++)
            {
                if(brr[i]+crr[j]<=k)
                {
                    ct++;
                }
            }
        }
        cout<<ct<<endl;
    }
 
    return 0;
}