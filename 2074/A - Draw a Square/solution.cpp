// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;cin>>n;
  while(n--)
  {
      int a,b,c,d;cin>>a>>b>>c>>d;
      if(abs(a)==abs(b) && abs(b)==abs(c) && abs(c)==abs(d))
      {
        cout<<"YES"<<endl;
      }
      else {
        cout<<"NO"<<endl;
      }
  }
    return 0;
}