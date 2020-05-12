#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=sqrt(b);i+=2)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>

using namespace std;
 
LL fun(LL n)
{
    
    run(i,3,n)
    {
        if(n%i==0)
            return n+i;
    }
    return n+n;
}
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n,k;
        cin>>n>>k;

        while(k--)
        {
            if(n%2==0)
            {
                n=n + 2*(k+1);
                k=0;
            }
            else
                n=fun(n);
        }
        cout<<n<<endl;

    }
    return 0;
}