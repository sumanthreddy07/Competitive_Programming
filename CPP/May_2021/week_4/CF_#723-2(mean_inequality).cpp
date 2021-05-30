#include <iostream>
#include <vector>
#include <string>
//#include<cmath>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
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
    int n,t;
    cin>>n;
    n = n+n;
    vector<int>A,B;

    run(i,0,n-1)
    {
        cin>>t;
        A.push_back(t);
    }
    sort(A.begin(),A.end());

    run(i,0,int((n)/2))
    {
        B.push_back(A[i]);
        B.push_back(A[int((n)/2)+i]);
    }

    run(i,0,n-1)
        cout<<B[i]<<" ";
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