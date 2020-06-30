#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
#define pi 3.14159265358979323846
using namespace std;
 
using namespace std;
 
int main()
{
 
    LL t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL x,y,n;
        cin>>x>>y>>n;

        sum=(n/x)*x+y;
        if(sum>n)
            cout<<sum-x<<endl;
        else
            cout<<sum<<endl;
        
    }
    return 0;
}