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
  
int main()
{
    IOS;
    L t;
    cin>>t;
    while(t--)
    {
        L a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        L ans=0,val;
        
        val=min(c,e);
        ans+=(val*2);
        c-=val;
        e-=val;

        if(c)
        {
            val=min(c,f);
            c-=val;
            f-=val;

            val=min(c,d);
            c-=val;
            d-=val;
        }
        if(b)
        {
            val=min(b,e);
            b-=val;
            e-=val;

            val=min(b,d);
            b-=val;
            d-=val;

            val=min(b,f);
            ans-=(val*2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
