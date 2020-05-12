#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    long long int t,k;
    cin>>t>>k;
    
    if(k<=(t+1)/2)
        cout<<k+k-1;
    else
    {
        if(t%2==1)
            cout<<k-t+k-1;
        else
        {
            cout<<k-t+k;
        }
        
    }
    
    return 0;
}