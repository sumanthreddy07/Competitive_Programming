#include <iostream>
#include <vector>
#include <string>
//#include<cmath>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <set> 

#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)

typedef long long ll;
typedef long l;
//typedef pair<int,int> pi;
//typedef pair<long,long> pl;
//#define F first
//#define S second


//#define pi 3.14159265358979323846
const ll mod=1000000007;

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
    l n,lll,r,x,sum=0,left=-1,right=-1;
    cin>>n>>lll>>r;

    vector<l>A;
    run(i,0,n-1)
    {
        cin>>x;
        A.push_back(x);

    }

    run(i,1,r)
    {
        if(B[i]>0)
        {
            run(j,lll,r)
            {
                if(B[j-i]>0)
                {
                    if(i==j-i)
                        sum+=(B[j-i]*(B[j-i]-1))/2;
                    else
                        sum+=B[i]*B[j-i];
                }
            }
            B[i]=0;
        }
    }
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