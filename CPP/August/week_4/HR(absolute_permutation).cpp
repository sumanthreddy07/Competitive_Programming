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
    L n,k;
    cin>>n>>k;

    if(k==0)
    {
        run(i,1,n)
            cout<<i<<" ";
        cout<<endl;
    }
    else if( k>n/2 || n%(k+k)!=0)
        cout<<-1<<endl;
    else
    {
        for(L i=1;i<n;i+=(k+k))
        {
            run(j,0,k-1)
                cout<<i+k+j<<" ";
            run(j,0,k-1)
                cout<<i+j<<" ";
        }
        cout<<endl;
    }
    
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