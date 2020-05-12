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
        long long i,n,a=0;
        cin>>n;

        for(i=1;i<=n/2;i++)
            a+=pow(2,i);

        cout<<a<<endl;
    
    }
    return 0;
}