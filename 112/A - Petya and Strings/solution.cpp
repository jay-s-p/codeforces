#include <bits/stdc++.h>  //o(n)
using namespace std;
int main() {
  string n;
  string m;
  cin>>n;
  cin>>m;
//   int n=n.size(); int m=m.size();
  for(int i=0; i<n.size(); i++)
  {
     if(n[i]>96){
         n[i]=n[i]-32;
     }
     if(m[i]>96){
         m[i]=m[i]-32;
     }
     
  }
//   cout<<n<<endl<<m<<endl;
  
  if(n==m)
  {
      cout<<0;
  }
  else if(n<m)
  {
      cout<<-1;
  }
  else
  {
      cout<<1;
  }
 
    return 0;
}