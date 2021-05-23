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
    int n;
    cin>>n;

    string b,a(n,'0'),d(n,'0');
    cin>>b;

    a[0]='1';
    if(b[0]=='0')
        d[0]='1';
    else
        d[0]='2';

    run(i,1,n-1)
    {
        if(b[i]=='1')
        {
            if(d[i-1]=='0')
            {
                d[i]='2';
                a[i]='1';
            }
            else if(d[i-1]=='1')
            {
                a[i]='1';
                d[i]='2';
            }
            else
            {
                a[i]='0';
                d[i]='1';
            }
        }
        else
        {
            if(d[i-1]=='0')
            {
                d[i]='1';
                a[i]='1';
            }
            else if(d[i-1]=='1')
            {
                a[i]='0';
                d[i]='0';
            }
            else
            {
                a[i]='1';
                d[i]='1';
            }
        }
    }
    cout<<a<<endln;

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