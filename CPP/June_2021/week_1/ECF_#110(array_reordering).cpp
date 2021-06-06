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
    l n,x,count=0,sum=0;
    cin>>n;
    vector<int>A;
    
    run(i,0,n-1)
    {
        cin>>x;
        if(x%2==0)
            count++;
        else
            A.push_back(x);
    }
    l z = n - count;

    sum = n*(n-1) - z*(z-1);
    sum = l(sum/2); 
    sort(A.begin(),A.end());
    run(i,0,z-1)
    {
        run(j,i+1,z-1)
        {
            if(gcd(A[j]+A[j],A[i])>1)
                sum++;
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