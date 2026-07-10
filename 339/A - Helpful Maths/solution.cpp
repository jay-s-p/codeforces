#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int c1=0; int c2=0; int c3=0;
    for(int i=0; i<s.size(); i+=2)
    {
        if(s[i]=='1') 
        {c1++;}
        if(s[i]=='2') 
        {c2++;}
        if(s[i]=='3') 
        { c3++;}
    }
    
    string t;
    for(int j=0; j<c1; j++) 
    {t+= "1+";}
    for(int j=0; j<c2; j++)
    {t+= "2+";}
    for(int j=0; j<c3; j++) {t+= "3+";}
    
    t.pop_back();
    cout<<t<<endl;
    return 0;
}