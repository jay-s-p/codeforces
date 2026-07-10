#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
   int w; cin>>w;
   while(w--)
   {
       string s; string t; cin>>s>>t;
       int k=s.size();
       int l=t.size();
       int ct=0;
       if(k==l)
       {
           if(s==t)
           {
               cout<<k+1<<endl;
               continue;
           }
          int i=0;
           while(s[i]==t[i])
           {
            ct++;
            i++;
           }
           if(ct>1)
           {
            cout<<k+l-ct+1<<endl;
           }
           else
           {
            cout<<k+l<<endl;
           }
           continue;
       }
       if(k<l)
       {
        int i=0;
           while(s[i]==t[i])
           {
            ct++;
            i++;
           }
          if(ct>1)
           {
            cout<<k+l-ct+1<<endl;
           }
           else
           {
            cout<<k+l<<endl;
           }
           continue;
       }
       if(k>l)
       {
           int i=0;
           while(s[i]==t[i])
           {
            ct++;
            i++;
           }
           if(ct>1)
           {
            cout<<k+l-ct+1<<endl;
           }
           else
           {
            cout<<k+l<<endl;
           }
           continue;
       }
   }
    return 0;
}