// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
int w;cin>>w;
while(w--)
{
    int k;cin>>k;
    
    if(k>101 && k<110)cout<<"YES"<<endl;
    else if(k>1009 && k<=1099)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    return 0;
}