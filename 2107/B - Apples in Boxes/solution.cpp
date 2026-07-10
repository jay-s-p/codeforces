#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
// #define int long long
 
void jsr()
{
   size_t n, k; 
   cin >> n >> k;
   long long mxct=0;
   vector<unsigned long long> arr(n);
   for(size_t i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
     long long min = *min_element(arr.begin(), arr.end());
   long long max = *max_element(arr.begin(), arr.end());
    unsigned long long sum = accumulate(arr.begin(), arr.end(), 0ULL);
   for(size_t i=0; i<n; i++)
   {
       if(arr[i]==max)mxct++;
   }
   
 if(mxct>1){
   if((max - min) > k)
   {
       cout << "Jerry" << endl;
       return;
   }}
   
   else{
       if((max - min)-1 > k)
   {
       cout << "Jerry" << endl;
       return;
   }
       
   }
//   cout<<sum<<endl;
   
   if(sum % 2 == 0)
   {
       cout << "Jerry" << endl;
   }
   else
   {
       cout << "Tom" << endl;
   }
}
 
int main()
{
   // ios_base::sync_with_stdio(0);
   // cin.tie(0); cout.tie(0);
   int asd;
   cin >> asd;
   
   while(asd--)
   {
       jsr();
   }
 
   return 0;
}