#include <bits/stdc++.h>
using namespace std;
 
int main() {
   char arr[40][40];
   for(int i=0; i<40; i++){
       for(int j=0; j<40; j++){
           arr[i][j]='.';
       }
   }
   for(int k=0; k<40; k+=2){
       int l=2;
       if(k%4==0){
           l=0;
       }
       
       for(; l<40; l+=4){
           arr[k][l]='#';
           arr[k][l+1]='#';
           arr[k+1][l]='#';
           arr[k+1][l+1]='#';
       }
   }
   
   int n;
   cin>>n;
   for(int q=0; q<n; q++)
   {
       int a;
       cin>>a;
       
       for(int b=0; b<2*a; b++)
       {
           for(int c=0; c<2*a; c++)
           {
              cout<<arr[b][c]; 
           }
           cout<<endl;
       }
    //   cout<<endl;
   }
   
    return 0;
}