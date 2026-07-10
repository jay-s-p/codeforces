// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int w;cin>>w;
   while(w--)
   {int mx=0;
       int n;cin>>n; int arr[n];
       for(int i=0;i<n; i++)
       {
           cin>>arr[i];
       }
       for(int i=0; i<n; i+=2)
       {
           if(mx<arr[i])
           {
               mx=arr[i];
           }
       }
       cout<<mx<<endl;
   }
 
    return 0;
}