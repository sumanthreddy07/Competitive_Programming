#include <bits/stdc++.h>

#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define display(A) for(auto x : A) cout<<x<<" "; cout<<"\n";

typedef long long ll;
typedef long l;
#define mod 1000000007
//#define MAX 1000000007

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
    int val;
    string s;
    set<char>a={'A','H','I','M','O','T','U','V','W','X','Y'};
    cin>>s;
    val=s.length()-1;
    run(i,0,val)
    {
        if(a.find(s[i])==a.end())
        {
            cout<<"NO"<<endln;
            return;
        }
    }
    run(i,0,val/2)
    {
        if(s[i]!=s[val-i])
        {
            cout<<"NO"<<endln;
            return;
        }
    }
    cout<<"YES"<<endln;

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