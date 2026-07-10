#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr();
void jsr()
{
    int ct=0;int ctt=0;
    string s; cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
           ct++;
           
        else ctt++;
    }int cttt=0;
    for(int i=s.size()-1; i>0;i--)
    {
        if(s[i]=='0')cttt++;
        else break;
    }
 
  cout<<ctt+cttt-1<<endl;
 
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
// jsr();
    int qwemnb; cin>>qwemnb;
    
    while(qwemnb--)
    {
        jsr();
    }
 
    return 0;
}
 