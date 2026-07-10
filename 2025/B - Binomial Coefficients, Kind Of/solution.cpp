#include <iostream>
#include <vector>
using namespace std;
 
const int MOD = 1e9 + 7;
 
 
long long modular_exponentiation(long long base, long long ex, long long mod) {
    long long result = 1;
    base = base % mod;
 
    while (ex > 0) 
    {
        if (ex % 2 == 1)
        {  
            result = (result * base) % mod;
        }
        ex = ex >> 1;  
        base = (base * base) % mod; 
    }
 
    return result;
}
 
int main() {
    int n; cin>>n;
   vector<long long>arr(n);
   vector<long long>brr(n);
   // vector<vector<long long>>C;
   for(int i=0; i<n ; i++)
   {
       cin>>arr[i];
   }
   for(int i=0; i<n ; i++)
   {
       cin>>brr[i];
   }
 
    
    for (int i = 0; i < n; i++) {
        long long result = modular_exponentiation(2, brr[i], MOD);
        cout<<result<<endl;
    }
 
    return 0;
}