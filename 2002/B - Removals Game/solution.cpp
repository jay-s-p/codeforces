// Online C++ compiler to run C++ program online jaysawertyuytrewsdfghjhgfd
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w;cin>>w;
    while(w--)
    {
        int n;cin>>n;
        vector<int> arr(n);vector <int> brr(n);
        for(int i=0; i<n ;i++)
        {
            cin>>arr[i];
        }
          for(int i=0; i<n ;i++)
        {
            cin>>brr[i];
        }
        if(arr==brr)
        {cout<<"Bob"<<endl;continue;}
         reverse(arr.begin(),arr.end());
         if(arr==brr)cout<<"Bob"<<endl;
         else cout<<"Alice"<<endl;
       
    }
 
    return 0;
}