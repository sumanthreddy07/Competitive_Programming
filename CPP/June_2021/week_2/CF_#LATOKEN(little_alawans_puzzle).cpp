#include <bits/stdc++.h>

#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define display(A) run(i,0,A.size()-1)cout<<A[i]<<" ";cout<<"\n";

typedef long long ll;
typedef long l;
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
ll binarypow(ll a,ll b)
{
    ll result = 1;

    while(b>0)
    {
        if(b&1)
        result = (result*a)%mod;
        a = (a*a)%mod;
        b=b>>1;
    }
    return result;
}
void solve()
{
    l n,x,count=0;
    cin>>n;
    vector<l>A(n+1),D(n+1),B(n+1,0);
    vector<pair<long,long>>C;
    run(i,1,n)
        cin>>A[i];
    run(i,1,n)
    {
        cin>>D[i];
    }
    C.push_back(make_pair(0,0));
    run(i,1,n)
    {
        C.push_back(make_pair(A[i],D[i]));
    }

    sort(C.begin(),C.end());

    run(i,1,n)
    {
        if(B[i]==0)
        {
            B[i]=1;
            l temp = i;
            l num = temp;
            while(temp!=C[num].second)
            {
                num = C[num].second;
                B[num]=1;
            }
            count++;
        }
    }
    cout<<binarypow(2,count)<<endln;

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