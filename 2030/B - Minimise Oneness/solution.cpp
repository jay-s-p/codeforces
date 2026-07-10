// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n; cin>>n;
        for(int i=0; i<n; i++)
        {
            if(i==1)
            {
                cout<<1;
            }
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}