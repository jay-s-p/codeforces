// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   for(int i =0; i<n; i++)
   {
       int a,b; cin>>a>>b;
       int arr[a][b];
       for(int j=0; j<a; j++)
       {
           for(int k=0; k<b; k++)
           {
               cin>>arr[j][k];
           }
       }
       if(a*b==1){cout<<"-1"<<endl;continue;}
       else if(a==1)
       {
           for(int j=0; j<a; j++)
           {
               cout<<arr[j][b-1];
               for(int k=0; k<b-1; k++)
               {
                   cout<<" "<<arr[j][k];
               }
               
               cout<<endl;
           }
       }
       else
       {
           for(int j=1; j<a; j++)
           {
               for(int k=0; k<b; k++)
               {
                   cout<<arr[j][k]<<" ";
               }
               cout<<endl;
           }
           for(int j=0; j<1; j++)
           {
               for(int k=0; k<b; k++)
               {
                   cout<<arr[j][k]<<" ";
               }
               cout<<endl;
           }
       }
   }
 
    return 0;
}