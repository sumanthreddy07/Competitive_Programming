#include <iostream>
//#include <vector>
#include <string>
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
    L n;
    cin>>n;
    string A,B;
    cin>>A;
    for(int i=0;i<A.size();i+=2)
        B+=A[i];
    cout<<B<<endl;
}
int main()
{
    IOS;
    L t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}