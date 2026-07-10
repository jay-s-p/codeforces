#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;cin>>n;
   while(n--)
   {
       int w;cin>>w;
      
           vector<string> arr(w);
           for(int i=0; i<w; i++)
           {
               cin>>arr[i];
           }
           for(int i=w-1;i>=0; i--)
           {
               for(int j=0; j<4; j++)
               {
                   if(arr[i][j]=='#')
                   {
                       cout<<j+1<<" ";
                       break;
                   }
                }
               
           }
       
       cout<<endl;
   }
  }