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

void solve()
{
    int n,m,flag=0,val;
    char x,y;
    cin>>n>>m;

    vector<string>A(n);
    char B[n][m];
    string s="";
    run(i,0,n-1)
        cin>>A[i];
    
    run(i,0,n-1)
    {
        run(j,0,m-1)
        {
            if(A[i][j]=='R' || A[i][j]=='W')
            {
                flag=1;
                x = A[i][j];
            }

            if(flag==1)
            {
                val=(i+j)%2;
                break;
            }
        }
        if(flag==1)
            break;
    }

    if(x=='R')
        y='W';
    else
        y='R';

    if(flag==0)
    {
        cout<<"YES"<<endln;
        run(i,0,n-1)
        {
            run(j,0,m-1)
            {
                if( (i+j)%2==0)
                    cout<<'R';
                else
                    cout<<'W';
            }
            cout<<endln;
        }
        return;
    }
    else
    {
        run(i,0,n-1)
        {
            run(j,0,m-1)
            {
                if( (i+j)%2==val)
                    B[i][j]=x;
                else
                    B[i][j]=y;
            }
        }
    }

    int check=0;
    run(i,0,n-1)
    {
        run(j,0,m-1)
        {
            if(A[i][j]!=B[i][j] && A[i][j]!='.')
            {
                check=1;
                break;
            }
        }
        if(check==1)
            break;
    }

    if(check==1)
        cout<<"NO"<<endln;
    else
    {
        cout<<"YES"<<endln;
        run(i,0,n-1)
        {
            run(j,0,m-1)
                cout<<B[i][j];
            cout<<endln;
        }
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