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
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

//int prime[MAX]; 
// void sieve()
// {
//   for (int i = 2; i < MAX; i++)
//   {
//     if (prime[i])
//     {
//       for (int j = i * i; j < MAX; j += i)
//       {
//         prime[j] = 0;
//       }
//     }
//   }
 
//   for (int i = 3; i < MAX; i++)
//   {
//     prime[i] += prime[i - 1];
//   }
// }

void solve()
{
    ll n,h,clicks=0;
    cin>>n>>h;

    vector<ll>A(n),B(n);
    run(i,0,n-1)
        cin>>A[i];
    run(i,0,n-1)
    {
        cin>>B[i];
        B[i]-=h;
    }
    run(i,0,n-1)
    {
        if(A[i]<=B[i])
        {
            cout<<-1<<endln;
            return;
        }   
        clicks = max(clicks, (A[i]+B[i]+2)/2);
    }
    cout<<clicks<<endln;
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