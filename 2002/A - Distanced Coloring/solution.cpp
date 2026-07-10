// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w;cin>>w;
    while(w--)
    {
        long long int n,m,k;cin>>n>>m>>k;
        long long a=n*m;
        if(a<=k)
        {
            cout<<a<<endl;
            continue;
        }
        if(m>=k && n>=k)
        {
            cout<<k*k<<endl;
            continue;
        }
        if((n<=k) && (m>=k ))
        {
            cout<<k*n<<endl;continue;
        }
         if((m<=k) && (n>=k ))
        {
            cout<<k*m<<endl;continue;
        }
        if(m<=k && n<=k)
        {
            cout<<m*n<<endl;
            continue;
        }
    }
 
    return 0;
}