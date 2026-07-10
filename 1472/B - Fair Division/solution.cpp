// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n;cin>>n;
        int arr[n];
        int ct1=0, ct2=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==1)ct1++;
            if(arr[i]==2)ct2++;
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0)
        {
            
            cout<<"NO"<<endl;
        }
        else if(ct2%2==1 && ct1==0)
        {
             cout<<"NO"<<endl;
        }
        else if(ct2%2==1 && ct1%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
    return 0;
}