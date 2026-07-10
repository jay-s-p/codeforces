#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string t;
    cin>>t;
    
    reverse(s.begin(), s.end());
    cout<<(s==t ? "YES" : "NO") <<endl;
 
    return 0;
}