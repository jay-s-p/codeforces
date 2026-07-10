// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n]; 
  for(int i=0; i<n; i++)
  {
      cin>>arr[i];
  }
  int ch=0;
  int bk=0;
  int bc=0;
  for(int i=0; i<n; i++)
  {
      if(i%3==0)
      {
          ch+=arr[i];
      }
      else if(i%3==1)
      {
          bc+=arr[i];
      }
      else
      {
          bk+=arr[i];
      }
  }
  if(ch>bc && ch>bk)cout<<"chest";
  if(bc>ch && bc>bk)cout<<"biceps";
  if(bk>ch && bk>bc) cout<<"back";
    return 0;
}