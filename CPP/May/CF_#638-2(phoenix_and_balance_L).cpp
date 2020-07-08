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
        long long i,n,a=0,b=0;
        cin>>n;

        a=pow(2,n)+2;
        b=pow(2,n/2)+pow(2,n/2+1);

        for(i=2;i<n/2;i++)
        {
            a+=pow(2,i);
            b+=pow(2,n-i+1);
        }

        if(n==2)
            cout<<2<<endl;
        else
            cout<<abs(a-b)<<endl;
    
    }
    return 0;
}