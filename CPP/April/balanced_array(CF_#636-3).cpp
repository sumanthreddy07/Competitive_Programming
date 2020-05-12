#include <bits/stdc++.h>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        if(n%4==0)
        {
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2)
                cout<<i<<" ";

            for(int i=1;i<n/2;i++)
                cout<<i*2-1<<" ";

            cout<<n+n/2-1<<endl;
        }   
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}