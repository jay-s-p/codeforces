// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin>>w;
    while(w--)
    {
       int n; cin>>n;
       if(n%2==0)
       {
           cout<<0<<endl;
           continue;
       }
       int ct=0;
       int w=0;
       int hj=n;
       while(hj>0)
       {
           int k=hj%10;
           if(k%2==0)
           {
               ct=k;
               
           }
           if(hj<10)
           {
               w=hj;
           }
           hj=hj/10;
       }
       if(ct==0)
       {
           cout<<-1<<endl;continue;
       }
       if(w%2==0)
       {
           cout<<1<<endl;
       }
       else
       {
           cout<<2<<endl;
       }
       
       
    }
    return 0;
}