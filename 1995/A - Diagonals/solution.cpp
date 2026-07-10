// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int j=0; j<n; j++)
    {
        int a,k,dia=0;;
        cin>>a>>k;
        int i=0;
        while(k>0)
        {
            if(i==0)
            {
                dia++;
                k=k-a;
                i++;continue;
            }
            else if(k>(a-i))
            {
                dia=dia+2;
                k=k-(2*(a-i));i++;
            }
            else if(k<=(a-i))
            {
                k=k-(a-i);
                dia=dia+1;i++;
            }
           
            
            
        }
        cout<<dia<<endl;
        
    }
 
    return 0;
}