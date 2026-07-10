// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--)
    
    {
        int k
        ; cin>>k;
        int arr[k];
        int cm=0;
        for(int i=0; i<k; i++)
        {
            cin>>arr[i];
        }
        int ct=0;int cn=0;
        for(int i=0; i<k-1; i++)
        {
            
            if(arr[i]==arr[i+1])
            {
                cn++;
                continue;
 
 
                
            }
         
            if(arr[i]!=arr[i+1])
            {
                    cm=max(cm,cn);
                    // cout<<cn<<"Asdf"<<endl;
                    cn=0;
            }
        }
        cm=max(cm,cn);
        cout<<k-(cm+1)<<endl;
    }
 
    return 0;
}