#include <iostream>
#include <map>
using namespace std;
 
int main() {
   unsigned long long int n, m;
    cin >> n >> m;
 
    map<long long int,long long int> np;
    map<long long int,long long int> mp;
 
    // Fill the mp map
    for (long long int i = 1; i <= m; i++) {
        mp[i % 5]++;
    }
 
    // Fill the np map
    for (long long int i = 1; i <= n; i++) {
        np[i % 5]++;
    }
 
   unsigned long long ans = 0;
    ans += (mp[0] * np[0]);
    ans += (mp[1] * np[4]);
    ans += (mp[2] * np[3]);
    ans += (mp[3] * np[2]);
    ans += (mp[4] * np[1]);
 
    cout << ans;
    return 0;
}