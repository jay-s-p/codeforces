#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int w;
    cin >> w;
    
    while (w--) {
        int n, k;
        cin >> n >> k;
        vector<vector<char>> arr(n, vector<char>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> arr[i][j];
            }
        }
        
     
        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k) {
                cout << arr[i][j] ;
            }
            cout << endl;
        }
    }
 
    return 0;
}