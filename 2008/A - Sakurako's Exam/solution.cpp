// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w;cin>>w; 
    while(w--)
    {
       int a,b;cin>>a>>b;
       if(a==0 && b==0)cout<<"YES"<<endl;
       else if(a==0 && b%2==0)cout<<"YES"<<endl;
       else if((a+(2*b))%2==0 &&a!=0) 
       {
           cout<<"YES"<<endl;
       }
       else
       cout<<"NO"<<endl;
    }
 
    return 0;
}