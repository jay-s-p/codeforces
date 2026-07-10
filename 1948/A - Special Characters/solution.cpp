#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        if(m%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int j=0; j<(m/2); j++)
            {
                char t=65+j;
                cout<<t<<t;
            }
            cout<<endl;
        }
    }
    return 0;
}