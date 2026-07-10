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
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int ct=0;
    for(int i=0; i<n -1;i++)
    {
    if(abs(arr[i]-arr[i+1])==7 || abs(arr[i]-arr[i+1])== 5) 
        {
            
        }
        else
        {
            ct++;
            break;
        }
    }
    if(ct==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
 
 
 
 
 
 
    
}