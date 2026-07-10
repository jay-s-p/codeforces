// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w; cin>>w;
    while(w--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int ct=0;
        if( s[0]=='1')
        {
            cout<<"YES"<<endl;continue;
        }
        if(s[n-1]=='1')
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1] && s[i]=='1')
            {
                ct++;
                break;
                
            }
        }
        
        
       if(ct>0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}