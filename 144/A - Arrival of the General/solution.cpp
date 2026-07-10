// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        
        cin>>arr[i];
    }
    int min=INT_MAX;
    int max=INT_MIN;
    int mini,maxi;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=min)
        {
            min=arr[i];
            mini=i;
        }
        if(arr[i]>max)
        {
            max=arr[i];
            maxi=i;
        }
    }
    if(maxi>mini)
    {
        cout<<n-(mini+1)+maxi-1;
    }
    else
    {
          cout<<n-(mini+1)+maxi;
    }
 
    return 0;
}