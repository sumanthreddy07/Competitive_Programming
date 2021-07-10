#include <bits/stdc++.h>

#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define run(i,a,b) for(auto i=a;i<=b;i++)
#define revrun(i,a,b) for(auto i=b;i>=a;i--)
#define display(A) for(auto x : A) cout<<x<<" "; cout<<"\n"
#define iterun(it,begin,end) for(auto it=begin;it!=end;it++)

typedef long long ll;
typedef long l;
#define mod 1000000007

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
    if (b == 0) return a;
    return gcd(b, a % b);
}

// vector<ll>store,prime;
// void sieve(ll n)
// {
//     prime.resize(n,1);
//     prime[0] = prime[1] = 0 ;

//     for (ll i = 2; i < n; i++)
//     {
//         if(prime[i])
//             store.push_back(i);
//         for (ll j = i * i; j < n; j += i)
//             prime[j] = 0;
//     }
// }

void solve()
{
    int ax,ay,bx,by,fx,fy;
    cin>>ax>>ay>>bx>>by>>fx>>fy;
    int val = abs(ax-bx)+abs(ay-by);
    if(ax==bx && ax==fx)
    {
        if( (fy>ay && fy<by) || (fy<ay && fy>by) )
            cout<<val+2<<endln;
        else
            cout<<val<<endln;
    }
    else if(ay==by && ay==fy)
    {
        if( (fx>ax && fx<bx) || (fx<ax && fx>bx) )
            cout<<val+2<<endln;
        else
            cout<<val<<endln;
    }
    else
        cout<<val<<endln;

}
int main()
{
    IOS;
    l t=1;
    cin>>t;
    while(t--)
    {
        // cout << "Case #" << casee++ << ": ";
        solve();
    }
    return 0;
}