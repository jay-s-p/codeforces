// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w; cin>>w;
   while(w--)
   {
       int n;cin>>n;
       if(n%2==0)
       cout<<n/2<< " "<<(n/2)-1<<" "<<1<<endl;
       else if((n/2)%2==0)
       {
           cout<<(n/2)-1<< " "<<(n/2)+1<<" "<<1<<endl;
       }
       else 
       {
           cout<<(n/2)-2<< " "<<(n/2)+2<<" "<<1<<endl;
       }
   }
 
    return 0;
}