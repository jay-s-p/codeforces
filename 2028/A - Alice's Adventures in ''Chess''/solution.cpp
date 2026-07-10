typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
 
void jayshreeram()
{
    int m; cin>>m;
    int a,b; cin>>a>>b;
    string t; cin>>t;
    string s="";
    for(int i=0; i<100; i++)
    {
        s+=t;
    }
    
    int n=0,e=0;
    // cout<<s<<endl;
    for(int i=0; i<s.size() ;i++)
    {
        if(s[i]=='N')n++;
        else if(s[i]=='E')e++;
        else if(s[i]=='S')n--;
        else if(s[i]=='W')e--;
        
        if(n==b && e==a)
        {
            cout<<"YES"<<endl;
            return;
        }
       
            
       
       
    }
    cout<<"NO"<<endl;
            return;
    
    
    
 
    
}
 
int main()
{
    int w; cin>>w;
    while(w--)
    {
        jayshreeram();
    }
}
 