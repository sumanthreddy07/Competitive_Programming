#include <iostream>
#include <vector>
#include <string>
#include<cmath>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
//#include <set> 
#include <cstring>
#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)

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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll maxPrimefactorNum(ll n)
{
    ll sum=0;
    for(l i = 2; i*i<=n;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            sum++;
        }
    }
    return sum;
}

void solve()
{
    ll a,b,k,GCD,sum=0;

    cin>>a>>b>>k;
    GCD = __gcd(a,b);

    ll gcdcount = maxPrimefactorNum(GCD)
    ll acount = maxPrimefactorNum(ll(a/GCD));
    ll bcount = maxPrimefactorNum(ll(b/GCD));

    if(acount+bcount<k)
    {
        if( (k-acount-bcount)%2==1)
            cout<<"NO"<<endln;
        else if( k-acount-bcount>gcdcount+gcdcount )
            cout<<"NO"<<endln;
        else
            cout<<"YES"<<endln;
    }
    else
        cout<<"YES"<<endln;

}
int main()
{
    l t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}