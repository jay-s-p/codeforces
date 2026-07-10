// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w; cin>>w;
    while(w--)
    {
        
        string s; cin>>s;
       int k=s.size();
       if(k==1)
       {
           cout<<"NO"<<endl;
           continue;
       }
       int ct=1;
       for(int i=0; i<s.size()-1; i++)
       {
           if(s[i]==s[i+1])
           {
               ct++;
           }
       }
       if(ct==k)
       {
           cout<<"NO"<<endl;continue;
       }
       int f=0;
       for(int i=1; i<k; i++)
       {
           if(s[i]!=s[0])
           {
               swap(s[i], s[0]);
               break;
           }
       }
       cout<<"YES"<<endl<<s<<endl;
    }
 
    return 0;
}