// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    
    std::ios sync_with_stdio (NULL); cin.tie(0); cout.tie(0);
    
    long long int n;
    cin>>n;
    for(long long int j=0; j<n; j++)
    {
        long long int a,x;
        cin>>a>>x;
       long long arr[a];
       for(long long int i=0;i<a; i++)
       {
           cin>>arr[i];
       }
      // sort(arr,arr+a);
       map<long long ,long long> mp;
       for(auto it:arr)
       {
           mp[it]++;
       }
       long long ans=0;
       for( auto it: mp)
       {
          int rom=it.first;
         long long int romrom=(x/rom);
          long long int sum=0;
          if(romrom<=mp[rom]){
              sum+=romrom*1LL*rom;
          }else{
               sum+=mp[rom]*1LL*rom;
          }
          
         // ans=max(ans,sum);
          
           if(1){
               long long int k=mp[rom];
                long long int l=0;
               while(k>=0&&l<=mp[rom-1]){
                   
                    long long int val=x-(rom*1LL*k+(rom-1)*1LL*l);
                   // cout<<rom*1LL*k<<" "<<(rom-1)*1LL*l<<endl;
                 //  cout<<val<<endl;
                   if(val>=0){
                       ans=max(ans,x-val);
                       l++;
                   }else{
                       k--;
                   }
               }
           }
           
       }
       
       cout<<ans<<endl;
       
    }
 
    return 0;
}