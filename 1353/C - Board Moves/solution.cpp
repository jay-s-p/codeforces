#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w; 
    cin >> w; // Number of test cases
    
    while (w--) {
        int k;
        cin >> k; // Input value
 
        if (k == 1) {
            cout << 0 << endl; // Output for k = 1
            continue; // Skip further processing
        }
 
        k = k / 2; // Adjust k
 
        // Calculate the sum of squares from 1 to k
        long long sumOfSquares = (long long)k * (k + 1) * (2 * k + 1) / 6; 
        long long sum = 8 * sumOfSquares; // Multiply the sum of squares by 8
 
        cout << sum << endl; // Output the result
    }
 
    return 0;
}