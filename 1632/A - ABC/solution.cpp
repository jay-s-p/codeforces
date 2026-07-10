// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
       int n;cin>>n;
       string s; cin>>s;
       
       if(n>2)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           if(s[0]==s[1])
           {
                cout<<"NO"<<endl;
           }
           else
           cout<<"YES"<<endl;
       }
       
    }
    return 0;
}