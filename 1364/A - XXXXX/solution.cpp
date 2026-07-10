#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t; // Number of test cases
    while (t--) {
        int n, m; 
        cin >> n >> m; // Read n and m
 
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Read array elements
        }
 
        int total_sum = accumulate(arr.begin(), arr.end(), 0);
        
        // If total sum is not divisible by m, the entire array is valid
        if (total_sum % m != 0) {
            cout << n << endl;
            continue;
        }
 
        // Find the first and last elements not divisible by m
        int left_index = -1, right_index = -1;
 
        for (int i = 0; i < n; i++) {
            if (arr[i] % m != 0) {
                left_index = i;
                break; // Found the first non-divisible element
            }
        }
 
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] % m != 0) {
                right_index = i;
                break; // Found the last non-divisible element
            }
        }
 
        // If both indices are -1, it means all elements are divisible by m
        if (left_index == -1 && right_index == -1) {
            cout << -1 << endl;
        } else {
            int max_length = 0;
            if (left_index != -1) {
                max_length = max(max_length, n - left_index - 1); // Exclude from the left
            }
            if (right_index != -1) {
                max_length = max(max_length, right_index); // Exclude from the right
            }
            cout << max_length << endl; // Output the maximum length found
        }
    }
    return 0;
}