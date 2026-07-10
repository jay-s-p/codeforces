#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w;cin>>w;
    while(w--)
    {
       long long int n,k;
        cin>>n>>k;
        if(k==1 )
        {
            cout<<n<<endl;
            continue;
        }
       
       
        int ct=0;
        
        while(n>0)
        {
            ct+=n%k;
            n/=k;
        }
        cout<<ct<<endl;
    }
}