// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
 
      long long x,i,j; cin>>x;
      long long ans=LLONG_MAX;
      
      for(i=1; i*i<=x; i++)
      {
      
          if(x%i==0)
          {
             long long g=gcd(i,x/i);
              if(g==1)
              {
                  ans=min(ans,(max(i,x/i)));
              }
          }
          
      }
     cout<<ans<<" "<<x/ans;
  
  
 
    return 0;
}