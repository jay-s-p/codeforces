// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int min=*min_element(arr, arr+n);
        int max=*max_element(arr, arr+n);
        cout<<(max-min)*(n-1)<<endl;
    }
    return 0;
}