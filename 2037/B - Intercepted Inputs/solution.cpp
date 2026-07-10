#include <bits/stdc++.h>
using namespace std;
 
void jsr(){
     int kumar;cin >> kumar; 
        vector<int> jay(kumar);
        
        for (int i = 0; i < kumar; ++i) {
            cin >> jay[i];
        }
 
        int si = kumar - 2; 
        vector<pair<int, int>> di;
 
     
        for (int d = 1; d * d <= si; ++d) {
            if (si % d == 0) {di.emplace_back(d, si / d);
                if (d != si / d)di.emplace_back(si / d, d);
            }
        }
 
        
        sort(jay.begin(), jay.end());
 
       
 
       
        for (const auto& [n, m] : di) {
            if (binary_search(jay.begin(), jay.end(), n) && binary_search(jay.begin(), jay.end(), m))
             {
                cout << n << " " << m << "
";return;
            }
        }
 
       
}
int main() {
    int t;
    cin >> t; 
 
    while (t--) {
     jsr();  
    }
 
    return 0;
}