// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   for(int i=0; i<n; i++)
   {
       int a,b;
       cin>>a>>b;
       if(b<-1)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }
   }
    return 0;
}