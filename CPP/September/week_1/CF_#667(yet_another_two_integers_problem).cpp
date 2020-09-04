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
    LL a,b;
    cin>>a>>b;

    LL count =abs(a-b)/10;
    
    if(abs(a-b)%10>0)
        count++;
    cout<<count<<endl;


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