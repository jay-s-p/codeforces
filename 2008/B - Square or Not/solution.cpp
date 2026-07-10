// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w;cin>>w; 
    while(w--)
    {
       int n;cin>>n;
       string s; cin>>s;
       float k= sqrt(n);
       int a=(int )k;
       if(k==a)
       {
           int q=(k-2)*(k-2);
           int sd= (n-q)/2;
           int ct=0,c=0;
           for(int i=0; i<n; i++)
           {
               if(s[i]=='1'){
                   ct++;
               }
               else 
               {
                   c++;
               }
           }
           if(ct==(n-q) && c==q)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
           
       }
       else
       {
           cout<<"NO"<<endl;
       }
       
    }
 
    return 0;
}