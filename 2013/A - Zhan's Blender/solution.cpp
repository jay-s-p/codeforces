// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
  int w; cin>>w;
  while(w--)
  {
      long long n,x,y;
      cin>>n>>x>>y;
      long long k=min(x,y);
      if(n%k==0)
      {
          cout<<n/k<<endl;
      }
      else
      {
          cout<<(n/k)+1<<endl;
      }
  }
    return 0;
}