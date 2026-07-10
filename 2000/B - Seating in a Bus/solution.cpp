// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
int w;cin>>w;
while(w--)
{
    int k;cin>>k;
    vector<int >arr(k);
    for(int i=0; i<k ;i++)
    {
        cin>>arr[i];
        
    }
    int ct=1;
    int m= arr[0];
     int r=arr[0], s=arr[0];
     
    for(int i=1; i<k; i++)
    {
        if(m==1)
        {
            if( (arr[i-1]==arr[i]-1))
            {
                ct++;
            }
        }
        
       
        // if(i==0)continue;
        else
        {
            if(arr[i]==r+1)
            {
                ct++;
                r=arr[i];
            }
            if(arr[i]==s-1)
            {
                ct++;
                s=arr[i];
            }
            
        }
    }
    if(ct==k)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
    return 0;
}