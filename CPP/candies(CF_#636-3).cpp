#include <bits/stdc++.h>
#include <cmath>
#include <vector>
 
using namespace std;
 
int main()
{
 
    long int t,n,val,power;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        for(power=2;power<30;++power)
        {
            val=(1<<power)-1;
 
            if(n%val==0)
            {
                cout<<n/val<<endl;
                break;
            }
        }
 
    }
    return 0;
}