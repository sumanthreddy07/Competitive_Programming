#include <bits/stdc++.h>

#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define display(A) run(i,0,A.size()-1)cout<<A[i]<<" ";cout<<"\n";

typedef long long ll;
typedef long l;
#define F first
#define S second
ll p = 1000000007;

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
        result = (result*a)%p;
        a = (a*a)%p;
        b=b>>1;
    }
    return result;
}
int power(ll x, unsigned int y, int m)
{
    if(x==0)
        return 0;

    int result = 1;
    x = x%m;
    while(y>0)
    {
        if(y&1)
            result = (result*x)%m;
        
        x = (x*x)%m;
        y=y>>1;
    }
    return result;
}

void solve()
{
    ll n,temp,sum=0;
    unsigned long long m;
    cin>>n>>m;
    temp = binarypow(2,n)-1;

    sum = power(temp, m, p);
    cout<<sum<<endln;

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