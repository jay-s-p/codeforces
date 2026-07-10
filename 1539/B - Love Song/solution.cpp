// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int n, m; cin>>n>>m;
   string s; cin>>s;
   int arr[n];
   arr[0]=s[0]-96;
   for(int i=1; i<n; i++)
   {
       arr[i]=arr[i-1]+(s[i]-96);
   }
//   for(int i=0; i<n; i++)
//   {
//       cout<<arr[i]<<" ";
//   }
   while(m--)
   {
       long long sum=0;
       int a,b; cin>>a>>b;
      cout<<arr[b-1]-arr[a-1]+(s[a-1]-96)<<endl;
       
   }
    return 0;
}