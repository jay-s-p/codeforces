/*                 SET
 
*/
 
typedef long long ll;
// #define int long long;
#include<bits/stdc++.h>
using namespace std;
 
void js();
 
int main()
{
    int w; cin>>w;
    while(w--)
    {
        js();
    }
}
 
void js()
{
    int n;cin>>n;
    int arr[2*n];
    int ct1=0;
    int ct0=0;
    for(int i=0; i<2*n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==1)ct1++;
        else
        {
            ct0++;
        }
    }
    int minn=ct1%2;
    int maxx= min(ct1,ct0);
    cout<<minn<<" "<<maxx<<endl;
 
    
 
 
 
 
    
}