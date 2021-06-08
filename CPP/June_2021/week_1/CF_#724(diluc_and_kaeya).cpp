#include <iostream>
#include <vector>
#include <string>
//#include<cmath>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
#include <map>
//#include <set> 
#include<cstring>
#include <utility>

#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)

typedef long long ll;
typedef long l;
//typedef pair<int,int> pi;
//typedef pair<long long,long long> pll;
//#define F first
//#define S second


//#define pi 3.14159265358979323846
const ll mod=1000000007;

using namespace std;

ll gcdi(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcdi(b, a % b);
     
}

pair<ll, ll> getRatio(ll a, ll b) {
    ll g = gcdi(a, b);
    a /= g;
    b /= g;
    return {a, b};
}

void solve()
{
    ll n,d=0,k=0;
    cin>>n;

    string s;
    cin>>s;

    map<pair<ll,ll>, ll> mapp;

    run(i,0,n-1)
    {
        if(s[i]=='D')
            d++;
        else
            k++;

        cout<<++mapp[getRatio(d,k)]<<" ";
    }
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