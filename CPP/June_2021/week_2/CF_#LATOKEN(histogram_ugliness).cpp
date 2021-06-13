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

void outans(vector<ll>Z)
{

}
void solve()
{
    ll n,count=0;
    cin>>n;

    vector<ll>A(n),B(n);

    run(i,0,n-1)
    {
        cin>>A[i];
        B[i]=A[i];
    }
    if(n<=2)
    {
        cout<<accumulate(A.begin(),A.end(),0)<<endln;
        return;
    }

    if(A[0]>A[1])
    {
        count+=A[0]-A[1];
        B[0]=B[1];
    }
    if(A[n-1]>A[n-2])
    {    
        count+=A[n-1]-A[n-2];
        B[n-1]=B[n-2];
    }
    run(i,1,n-2)
    {
        if(A[i]>A[i-1] && A[i]>A[i+1])
        {
            count+=min(A[i]-A[i-1],A[i]-A[i+1]);
            B[i]=max(A[i-1],A[i+1]);
        }
    }
    run(i,1,n-1)
    {
        count+=abs(B[i]-B[i-1]);
    }
    cout<<count+B[0]+B[n-1]<<endln;        
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