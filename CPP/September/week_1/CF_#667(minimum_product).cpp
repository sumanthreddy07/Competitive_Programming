#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
//#include <set> 

#define endl "\n"
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIRLL pair<long long,long long>
//#define PAIRII pair<int,int>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LL long long
#define L long
const LL mod=1000000007;

using namespace std;

void solve()
{
    LL a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    LL tempa=a,tempb=b,tempn=n;
    LL ans;
    if(tempn<=tempa-x)
    {
        tempa-=tempn;
        tempn=0;
    }
    else
    {
        tempn-=(tempa-x);
        tempa=x;
        tempb-=min(tempn,tempb-y);
    }
    ans=tempa*tempb;
    tempa=a;
    tempb=b;
    tempn=n;
    if(tempn<=tempb-y)
    {
        tempb-=tempn;
        tempn=0;
    }
    else
    {
        tempn-=(tempb-y);
        tempb=y;
        tempa-=min(tempn,tempa-x);
    }
    
    cout<<min(ans,tempa*tempb)<<endl;
}
int main()
{
    IOS;
    L t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}