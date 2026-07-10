// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
       int n; cin>>n;
       if(n%7==0)
       {
           cout<<n<<endl;
           continue;
       }
       int k=n%10;
       n+=(9-k);
       int w=n%7;
       cout<<n-w<<endl;
       
    }
    return 0;
}