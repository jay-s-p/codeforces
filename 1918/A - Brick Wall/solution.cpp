// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
       int n; cin>>n;
       int m; cin>>m;
        long long mn;
       if(m%2==1)
       {
           mn= n*(m-1);
       }
       else
       mn=m*n;
       cout<<mn/2<<endl;;
      
       
   
    }
    return 0;
}