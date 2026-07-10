#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
 
using namespace std;
 
void js() {
   int n;cin>>n;
   if(n%3==0)
   {
       cout<<0<<endl;
   }
   if(n%3==1)
   {
       cout<<2<<endl;
   }
   if(n%3==2)
   {
       cout<<1<<endl;
   }
    }
 
 
int main() {
    int w; cin>>w;
    while(w--){
       js();   
    }
    
    return 0;
}