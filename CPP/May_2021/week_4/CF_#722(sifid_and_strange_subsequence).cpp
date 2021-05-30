#include <iostream>
#include <vector>
#include <string>
//#include<cmath>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
#include <limits.h>
//#include <map> <unordered_map>
//#include <set> 

#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)

typedef long long ll;
typedef long l;
//typedef pair<int,int> pi;
//typedef pair<long,long> pl;
//#define F first
//#define S second
#include <functional>

//#define pi 3.14159265358979323846
const ll mod=1000000007;

using namespace std;


void solve()
{
    l n,diff,j;
    l x,mini=INT32_MAX,count=1;
    cin>>n;

    vector<l> A;

    run(z,0,n-1)
    {
        cin>>x;
        A.push_back(x);
    }
    sort(A.begin(),A.end());
    run(i,1,n-1)
    {
        mini = min(mini,abs(A[i]-A[i-1]));
        if(mini>=A[i])
            count++;
    }
    cout<<count<<endln;

}
int main()
{
    IOS;
    l t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}