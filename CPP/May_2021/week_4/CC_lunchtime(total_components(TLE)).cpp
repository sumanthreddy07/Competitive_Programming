#include <iostream>
#include <vector>
#include <string>
//#include<cmath>
//#include <algorithm>
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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
const long long MAX_SIZE = 10000001;

vector<long long >isprime(MAX_SIZE , true);
vector<long long >prime;
vector<long long >SPF(MAX_SIZE);
void manipulated_seive(int N)
{
    // 0 and 1 are not prime
    isprime[0] = isprime[1] = false ;
  
    // Fill rest of the entries
    for (long long int i=2; i<N ; i++)
    {
        if (isprime[i])
        {
            // put i into prime[] vector
            prime.push_back(i);
  
            SPF[i] = i;
        }
        for (long long int j=0;
             j < (int)prime.size() &&
             i*prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i*prime[j]]=false;
  
            SPF[i*prime[j]] = prime[j] ;
        }
    }
}
void solve()
{
    ll n,count=0;
    cin>>n;

    if(n<=3)
    {
        cout<<n-1<<endln;
        return;
    }

    for (int i=ll(n/2)+1; i<=n ; i++)
        if(isprime[i]==true)
            count++;
    
    cout<<count+1<<endln;

}
int main()
{
    IOS;
    l t=1;
    cin>>t;
    manipulated_seive(10000000);

    while(t--)
    {
        solve();
    }
    return 0;
}