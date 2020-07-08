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
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n,m;
        cin>>n>>m;

        if(n==1)
            cout<<0<<endl;
        else if(n==2)
            cout<<m<<endl;
        else
            cout<<m+m<<endl;
        

    }
    return 0;
}