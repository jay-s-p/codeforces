// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int w;cin>>w;
   while(w--)
   {
       int n;cin>>n;
       if(n%4==0 && n>3)
       {
           cout<<(n/4)<<endl;
       }
       else
       {
           cout<<(n/4)+1<<endl;
       }
   }
 
    return 0;
}