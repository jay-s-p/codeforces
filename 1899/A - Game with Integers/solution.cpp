// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    int n;
    cin>>n;
    for(int i=0; i<n; i++ )
    {
        int m;
        cin>>m;
        if(m%3==0)
        {
            cout<<"Second"<<endl;
        }
        else
        {
            cout<<"First"<<endl;
        }
    }
    return 0;
}