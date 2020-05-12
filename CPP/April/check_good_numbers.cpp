#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        while( n%3==0 || n%3==1 )
        {
            if(n%3==1)
                n=n-1;

            if(n==1 || n==0)
            {
                cout<<"YES"<<endl;
                break;
            }
            n=n/3;            
        }

        if(n%3==2)
            cout<<"NO"<<endl;

    }
    return 0;
}