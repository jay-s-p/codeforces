#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b;cin>>b;
    while(b--)
    {
        int s;cin>>s;
        vector<int>arr(s);
        for(int i=0; i<s; i++)
        {
            cin>>arr[i];
        }
        if(s==2 && abs(arr[1]-arr[0])>1)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        
    }
}