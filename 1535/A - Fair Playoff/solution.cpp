// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w;cin>>w;
   while(w--)
   {
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       if(a>c && a>d && b>c && b>d)
       {
           cout<<"NO"<<endl;
       }
       else if(c>a && c>b && d>a && d>b)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }
       
       
   }
    return 0;
}