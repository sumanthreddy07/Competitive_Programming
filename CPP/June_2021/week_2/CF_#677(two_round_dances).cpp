#include <iostream>
#include <vector>
#include <string>
//#include<cmath>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
#include <limits.h>
//#include <map> <unordered_map>
#include <set> 
#include <deque>
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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

ll binarypow(ll a,ll b)
{
    ll result = 1;

    while(b>0)
    {
        if(b&1)
        result = (result*a);
        a = (a*a);
        b=b>>1;
    }
    return result;
}

ll factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

void solve()
{
    ll n,ans=1;
    cin>>n;

    if(n==2)
    {
        cout<<1<<endln;
        return;
    }
    ans = factorial(n)/(n*(n/2));

    cout<<ll(ans)<<endln;

}
int main()
{
    IOS;
    l t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}