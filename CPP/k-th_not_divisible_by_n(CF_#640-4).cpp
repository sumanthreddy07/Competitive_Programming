#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>

using namespace std;
 
int main()
{
 
    L t,n,k,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;

        if(n>k)
            cout<<k<<endl;
        else
        {
            flag=(k-1)/(n-1);
            sum= flag+k;
            cout<<sum<<endl;
        }

    }
    return 0;
}