// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w;cin>>w;
   while(w--)
   { int n;cin>>n;
       int arr[19]={0,1,2,4,5,7,8,10,11,14,16,17,19,20,22,25,26,28,29};
      
       int k=(n%18);
       if(n%18==0)
       {
           cout<<(n/18)*30+arr[k]-1<<endl;
       }
       else
       cout<<(n/18)*30+arr[k]<<endl;
       
       
   }
    return 0;
}