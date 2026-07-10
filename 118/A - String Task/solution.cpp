#include <bits/stdc++.h>
// #include <string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // s=s.tolower(s);
    string t;
    for(int i=0; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);
        // cout<<s[i]<<endl;
        if(s[i] == 'e') 
        {
            continue;
        }
         if(s[i] == 'a') 
        {
            continue;
        }
         if(s[i] == 'i') 
        {
            continue;
        }
         if(s[i] == 'o') 
        {
            continue;
        }
         if(s[i] == 'u') 
        {
            continue;
        }
         if(s[i] == 'y') 
        {
            continue;
        }
        else{
            t+=s[i];
        }
    }
    
    for(int i=0; i<t.size(); i++)
    {
        cout<<"."<<t[i];
    }
    
}