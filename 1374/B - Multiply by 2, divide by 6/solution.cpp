// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w;cin>>w; 
    while(w--)
    {
      long long n;cin>>n;
      long long pow2=0,pow3=0;
      while(n%2==0)
      {
          pow2++;n=n/2;
      }
      while(n%3==0)
      {
          pow3++;n/=3;
      }
      if(n>1 || pow3<pow2)
      {
          cout<<"-1
";
      }
      else
      {
          cout<<((pow3-pow2)+pow3)<<endl;
      }
    }
 
    return 0;
}