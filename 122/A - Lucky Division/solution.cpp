// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;cin>>k;
    int arr[12]={4,7,47,74,444,447,474,477,744,747,774,777};
    
    for(int i=0; i<12; i++)
    {
        if(k==arr[i])
        {
            cout<<"YES";return 0;
        }
    }
     for(int i=0; i<12; i++)
    {
        if(k%arr[i]==0)
        {
            cout<<"YES";return 0;
        }
    }
   cout<<"NO";
    return 0;
}