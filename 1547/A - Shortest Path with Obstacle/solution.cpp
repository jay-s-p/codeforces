// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int w; cin>>w;
   while(w--)
   {
       int a,b,c,d,e,f;
       cin>>a>>b>>c>>d>>e>>f;
    //   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
       if((a == c) && (a== e))
       {
        //   cout<<"qwertyuiop"<<" ";
           if(f<(max(b,d)) && f>(min(b,d)))
           {
               cout<<abs(a-c)+abs(b-d)+2<<endl;
           }
           else
           {
               cout<<abs(a-c)+abs(b-d)<<endl;
           }
       }
       else if(b==d && b==f)
       {
        //   cout<<"TREWSDCVBFEDFVBGFRERG"<<" ";
            if(e<max(a,c) && e>min(a,c))
           {
               cout<<abs(a-c)+abs(b-d)+2<<endl;
           }
           else
           {
               cout<<abs(a-c)+abs(b-d)<<endl;
           }
       }
       else
       {
        cout<<abs(a-c)+abs(b-d)<<endl;
       }
       
   }
 
    return 0;
}