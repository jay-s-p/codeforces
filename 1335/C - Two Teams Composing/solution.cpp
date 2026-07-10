// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w;cin>>w; 
    while(w--)
    {
      int n;cin>>n;
      vector<int> v(n);
      for(int i=0; i<n; i++)
      {
          cin>>v[i];
      }
      map<int , int>mpp;
      for(auto i:v)
      {
          mpp[i]++;
      }
      int mx=0; int diff=mpp.size();
      for(auto it: mpp)
      {
          mx=max(mx,it.second);
      }
      if(mx==diff)
      {
          cout<<mx-1<<endl;
      }
      else if(mx>diff)
      {
          cout<< diff<<endl;
       }
       else
       {
           cout<<mx<<endl;
       }
      
    }
 
    return 0;
}