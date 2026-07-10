/*                 SET
 
*/
 
typedef long long ll;
// #define int long long;
#include<bits/stdc++.h>
using namespace std;
 
void jayshreeram();
 
int main()
{
    int w; cin>>w;
    while(w--)
    {
        jayshreeram();
    }
}
 
void jayshreeram()
{
   ll n,k;
   cin>>n>>k;
   vector<int> arr(k+1,0);
   for(int i=0; i<k; i++)
   {
       int a,b;
       cin>>a>>b;
       arr[a]+=b;
   }
   sort(arr.begin(), arr.end(), greater<int>());
   
   int we=min(n,k);
   ll ans=0;
   for(int i=0; i<we; i++)
   {
       ans+=arr[i];
   }
    cout<<ans<<endl;
}