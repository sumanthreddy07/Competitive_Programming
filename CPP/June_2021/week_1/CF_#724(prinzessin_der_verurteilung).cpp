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
    l n,val=-1,num;
    cin>>n;
    string s,ans="";
    cin>>s;
    vector<int>alphab(1002,0);

    run(i,0,n-1)
    {
        alphab[s[i]-96]++;

        if(i>0)
        {
            num = 26*(s[i-1]-96)+s[i]-96;
            alphab[num]++;
        }
        if(i>1)
        {
            num = 26*26*(s[i-2]-96)+26*(s[i-1]-96)+s[i]-96;
            if(num<1002)
                alphab[num]++;
        }

    }

    run(i,1,1001)
    {
        if(alphab[i]==0)
        {
            val = l(i);
            break;
        }    
    }
    while(val>0)
    {
        n = val%26;
        ans = char(96+n)+ans;
        val = l(val/26);
    }

    cout<<ans<<endln;
    
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