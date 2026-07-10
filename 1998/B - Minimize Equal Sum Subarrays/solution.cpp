// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w;cin>>w;
    while(w--)
    {
        int k;cin>>k;
        int arr[k];
        for(int i=0; i<k ; i++)
        {
            cin>>arr[i];
        }
        cout<<arr[k-1]<<" ";
        for(int i=0; i<k-1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}