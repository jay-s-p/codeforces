#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   for(int i=0; i<n; i++)
   {
       int m,a,b;
       cin>>m>>a>>b;
       if(m%2==0)
       {
           if(m*a > b*(m/2))
           {
               cout<<b*(m/2)<<endl;
           }
            else
            {
                cout<<m*a<<endl;
            }
       }
       
       else
       {
           if(a*2 > b)
           {
               cout<<b*(m/2)+a<<endl;
           }
           else
           {
               cout<<a*m<<endl;
           }
       }
   }
    return 0;
}