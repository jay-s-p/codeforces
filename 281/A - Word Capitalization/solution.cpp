#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string t=s;
     s=toupper(s[0]);
    cout<<s;
    for(int i=1; i<t.size(); i++){
        cout<<t[i];
    }
    // cout<<t;
    // s=toupper(s[0]);
    // cout<<s;
    return 0;
}