#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    long int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;

        if(a==b)
            cout<<0;
        else
        {
            if(a>b)
            {
                if( (a%2==0 && b%2==1) || (a%2==1 && b%2==0) )
                    cout<<2;
                else
                    cout<<1;
            }
            else
            {
                if( (a%2==0 && b%2==1) || (a%2==1 && b%2==0) )
                    cout<<1;
                else
                    cout<<2;
            }
        }
        cout<<endl;
    }
    return 0;
}