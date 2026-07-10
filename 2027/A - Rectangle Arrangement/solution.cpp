/* SET
 
*/
// typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
// #define int long long;
 
void solve();
 
int main()
{
    int w; cin>>w;
    while(w--)
    {
       int n; cin>>n;
    int arr[2*n];
    for(int i=0; i<2*n; i++)
    {
        cin>>arr[i];
    }
    int maxh=0;
    int maxw=0;
    for(int i=0; i<2*n; i++)
    {
        if(i%2==0)
        {
            maxw=max(maxw,arr[i]);
        }
        if(i%2==1)
        {
            maxh=max(maxh,arr[i]);
        }
    }
    cout<<maxh+maxh+maxw+maxw<<endl;
    }
    return 0;
}
 
 
    