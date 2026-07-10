// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
int w;cin>>w;
while(w--)
{
   
    string s;cin>>s; int ct=0;
     int q=s.size()-1;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s[i+1])
        {
            ct++;
            int qwer=s[i];
            char a;
          if(qwer==122) a= s[i]-1;
            else a= s[i]+1;
            int zx=(i+1);
            s.insert(s.begin()+zx,a);
            break;
        }
       
        
    }
     if(ct==0)
        {
            char a;int qwer=s[q];
            // s.insert(6, str2);
            if(qwer==122)  a= s[q]-1;
            else  a= s[q]+1;
            s.insert(s.end(),a);
        }
        cout<<s<<endl;
        
}
 
    return 0;
}