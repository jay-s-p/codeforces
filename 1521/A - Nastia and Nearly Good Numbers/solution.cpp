// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
  int w; cin>>w;
  while(w--)
  {
      long long a,b; cin>>a>>b;
      if(b==1)
      {
          cout<<"NO"<<endl;
      }
      else if(b==2)
      {
          cout<<"YES"<<endl;
          cout<<a<<" "<<3*a<<" "<<4*a<<endl;
          
      }
      else
      {
            cout<<"YES"<<endl;
          cout<<a<<" "<<(b-1)*a<<" "<<b*a<<endl;
      }
  }
 
    return 0;
}