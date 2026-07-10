// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int a; cin>>a;
   vector<int> arr(a);
   for(int i=0; i<a; i++)
   {
       cin>>arr[i];
   }
   int ct=0;
   int ctt=0;
   for(int i=0; i<a; i++ )
   {
       if(arr[i]%2==1 && ct<3){
           ct++;
         
       }
        if(arr[i]%2==0 && ctt<3){
           ctt++;
           
       }
   }
   if(ct==1)
   {
       for(int i=0; i<a; i++)
       {
           if(arr[i]%2==1)
           {
               cout<<i+1<<endl;
               return 0;
           }
       }
   }
   if(ctt==1)
   {
       for(int i=0; i<a; i++)
       {
           if(arr[i]%2==0)
           {
               cout<<i+1<<endl;
               return 0;
           }
       }
   }
    return 0;
}