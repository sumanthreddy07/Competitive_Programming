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
#define mod 1000000007;

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

void solve()
{
    int flag=0;
    ll n,val;
    cin>>n;

    vector<ll>A(n),B(n,0);
    vector<pair<ll,ll>>C;

    run(i,0,n-1)
        cin>>A[i];

    B[0]=1;

    run(i,1,n-1)
    {
        if(A[0]!=A[i])
        {
            flag=1;
            C.push_back(make_pair(1,i+1));
            B[i]=1;
            val=i;
        }
    }

    if(flag==0)
    {
        cout<<"NO"<<endln;
        return;
    }

    run(i,0,n-1)
    {
        if(B[i]==0)
        {
            C.push_back(make_pair(val+1,i+1));
        }
    }

    cout<<"YES"<<endln;
    run(i,0,C.size()-1)
    {
        cout<<C[i].first<<" "<<C[i].second<<endln;
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