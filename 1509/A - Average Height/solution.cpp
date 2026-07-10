// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--)
    {
        int k; cin>>k;
        int arr[k];
        for(int i=0; i<k ; i++) cin>>arr[i];
        
        int l=0; int r=k-1;
        while(l<r)
        {
            if(arr[l]%2==0)
            {
                swap(arr[l],arr[r]);
                r--;
            }
            if(arr[l]%2==1)
            {
                l++;
            }
        }
        for(int i=0; i<k; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}