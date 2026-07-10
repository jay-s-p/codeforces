#include <bits/stdc++.h>
 
using namespace std;
 
void js() {
    
    int n,s,x;cin>>n>>s>>x;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    
    if(sum==s)
    {
        cout<<"YES"<<endl;
        return;
        
    }
    
    // cout<<s<<x<<" "<<sum;
    int k=s-sum;
    if(s<sum)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(k%x==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}
 
 
int main() {
    int w; cin>>w;
    while(w--){
       js();   
    }
    
    return 0;
}