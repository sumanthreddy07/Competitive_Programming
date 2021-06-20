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
    ll n,k,x,val;
    cin>>n>>k>>x;

    vector<ll>A(n),B;
    run(i,0,n-1)
        cin>>A[i];

    sort(A.begin(),A.end());

    run(i,1,n-1)
    {
        val = A[i]-A[i-1]-1;
        if(val>=x)
        {
            B.push_back(ll(val/x));
        }
    }

    if(B.size()==0)
    {
        cout<<1<<endln;
        return;
    }
    sort(B.begin(),B.end());
    val = B.size()+1;
    run(i,0,B.size()-1)
    {
        if(k>=B[i])
        {
            k-=B[i];
            val--;
        }
        else
            break;
    }
    cout<<val<<endln;

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