#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
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
#define vi vector<int>
//typedef vector<long> vl;
#define PB push_back
//#define MK make_pair
//#define F first
//#define S second


//#define pi 3.14159265358979323846
const ll mod=1000000007;

using namespace std;

bool isPrime(int n)
{
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

void solve()
{
    vi arr;
    int n,val;
    cin>>n;
    run(i,0,n-1)
    {
        cin>>val;
        arr.PB(val);
    }
    if(arr[0]==n && arr[n-1]==1)
        cout<<3<<endln;
    else if(arr[0]!=1 && arr[n-1]!=n)
        cout<<2<<endln;
    else
    {
        if(is_sorted(arr.begin(),arr.end()))
            cout<<0<<endln;
        else
            cout<<1<<endln;
    }
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