// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w; cin>>w;
   while(w--)
   {
       int n;cin>>n;
       if(n<10)
       {
           cout<<n<<endl;
       }
       else if(n<=100)
       {
          int k=n/11;
          cout<<9+k<<endl;
       }
       else if(n<=1000)
       {
           int k=n/111;
          cout<<18+k<<endl;
       }
       else if(n<10000)
       {
           int k=n/1111;
          cout<<27+k<<endl;
       }
       else if(n<=100000)
       {
           int k=n/11111;
          cout<<36+k<<endl;
       }
       else if(n<=1000000)
       {
           int k=n/111111;
          cout<<45+k<<endl;
       }
       else if(n<=10000000)
       {
           int k=n/1111111;
          cout<<54+k<<endl;
       }
       else if(n<=100000000)
       {
           int k=n/11111111;
          cout<<63+k<<endl;
       }
       else if(n<=1000000000)
       {
           int k=n/111111111;
          cout<<72+k<<endl;
       }
   }
 
    return 0;
}