// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n;cin>>n;
        int arr[n];
        int brr[n];
        int ct1=0, ct2=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            brr[i]=arr[i];
            
        }
        sort(arr,arr+n);
        if(arr[0]==arr[1])
        {
            ct1=arr[n-1];
        }
        else
        {
            ct1=arr[0];
        }
        for(int i=0; i<n; i++)
        {
            if(ct1==brr[i])
            {
                ct2=i+1;
            }
        }
        cout<<ct2<<endl;
       
    }
    return 0;
}