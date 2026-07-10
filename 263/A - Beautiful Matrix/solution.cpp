// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int k=0; int l=0;
    int arr[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                k=i;
                l=j;
                break;
            }
        }
    }
    k++; l++;
    // cout<<k <<" "<<l;
    int op=0;
    if(k==5 || k==1)op+=2;
    else if(k==2 || k==4) op+=1;
    
    if(l==1 || l==5)op+=2;
    else if (l==2 || l==4)op++;
    cout<<op;
    
    
    return 0;
}