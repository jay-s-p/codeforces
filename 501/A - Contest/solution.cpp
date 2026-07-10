// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int k=((3*a)/10);
    int l=(a-((a/250)*c));
    
    int m=((3*b)/10);
    int n=(b-((b/250)*d));
    int w=max(k,l);
    int q=max(m,n);
    if(w==q)
    {
        cout<<"Tie";
    }
    // asdfghjkl;''
    else if( q>w)
    {
        cout<<"Vasya";
    }
    else
    {
        cout<<"Misha";
    }
    return 0;
}