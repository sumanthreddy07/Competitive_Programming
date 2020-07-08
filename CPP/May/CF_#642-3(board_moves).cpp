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
 
    LL t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n;
        cin>>n;
        sum=0;

        for(i=1;i<=n;i=i+2)
            sum+= (i-1)*4*(LL)(i/2);
        
        cout<<sum<<endl;
    }
    return 0;
}