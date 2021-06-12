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
    int n,m,val=-1;
    cin>>n>>m;

    vector<int>A(n),B(m),C(n,n+1);

    run(i,0,n-1)
    {
        cin>>A[i];
        if(A[i]!=0)
            C[i]=0;
        else
            C[i]=INT_MAX;
    }
    C[0]=0;
    run(i,0,m-1)
        cin>>B[i];

    run(i,0,n-1)
    {
        if(A[i]==1)
        {
            val = 0;
            C[i]= min(C[i],val);
        }
        else if(val>=0)
        {
            val++;
            C[i]=min(C[i],val);
        }
    }
    val = -1;
    revrun(i,0,n-1)
    {
        if(A[i]==2)
        {
            val = 0;
            C[i]=min(C[i],val);
        }
        else if(val>=0)
        {
            val++;
            C[i]=min(val,C[i]);
        }
    }
    run(i,0,n-1)
    {
        if(C[i]==INT_MAX)
            C[i]=-1;
    }
    run(i,0,m-1)
        cout<<C[B[i]-1]<<" ";
    cout<<endln;


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