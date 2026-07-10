// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w;cin>>w;
    while(w--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        
        int a=k/2;
        if(k%2==1)
        {
            for(int i=1; i<=a; i++)
            {
                if(x!=0 && y!=0){
                cout<<x+(x*i)<<" "<<y+(y*i)<<endl;
                cout<<x+(x*(-i))<<" "<<y+(y*(-i))<<endl;}
                if(x==0 &&y!=0)
                {
                    // x=2;
                    cout<<x+(2*i)<<" "<<y+(y*i)<<endl;
                    cout<<x+(2*(-i))<<" "<<y+(y*(-i))<<endl;
                }
                if(y==0 && x!=0)
                {
                    cout<<x+(x*i)<<" "<<y+(2*i)<<endl;
                    cout<<x+(x*(-i))<<" "<<y+(2*(-i))<<endl;
                    
                }
                 if(x==0&& y==0)
                {
                    cout<<x+(2*i)<<" "<<y+(2*i)<<endl;
                    cout<<x+(2*(-i))<<" "<<y+(2*(-i))<<endl;
                    
                }
            }
            cout<<x<<" "<<y<<endl;
        }
        if(k%2==0)
        {
            for(int i=1; i<=a; i++)
            {
                if(x!=0 && y!=0){
                cout<<x+(x*i)<<" "<<y+(y*i)<<endl;
                cout<<x+(x*(-i))<<" "<<y+(y*(-i))<<endl;}
                 if(x==0 & y!=0)
                {
                    // x=2;
                    cout<<x+(2*i)<<" "<<y+(y*i)<<endl;
                    cout<<x+(2*(-i))<<" "<<y+(y*(-i))<<endl;
                }
                if(y==0&& x!=0)
                {
                    cout<<x+(x*i)<<" "<<y+(2*i)<<endl;
                    cout<<x+(x*(-i))<<" "<<y+(2*(-i))<<endl;
                    
                }
                if(x==0&& y==0)
                {
                    cout<<x+(2*i)<<" "<<y+(2*i)<<endl;
                    cout<<x+(2*(-i))<<" "<<y+(2*(-i))<<endl;
                    
                }
            }
            // cout<<x<<" "<<y<<endl;
        }
    }
 
    return 0;
}