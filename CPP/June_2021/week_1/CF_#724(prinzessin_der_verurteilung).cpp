#include <iostream>
#include <vector>
#include <string>
//#include<cmath>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
#include <map>
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
    l n;
    cin>>n;
    string s,temp="";
    cin>>s;

    map<string,l> mapp;

    run(i,0,n-1)
    {
        mapp[s.substr(i,1)]++;
    
        if(i!=n-1)
            mapp[s.substr(i,2)]++;
        if(1!=n-2)
            mapp[s.substr(i,3)]++;
    }

    run(i,1,26)
    {
        temp = "";
        temp+=char(96+i);

        if(mapp[temp]==0)
        {
            cout<<temp<<endln;
            return;
        }
    }
    run(i,1,26)
    {
        temp="";
        run(j,1,26)
        {
            temp="";
            temp+=char(96+i);
            temp+=char(96+j);
            if(mapp[temp]==0)
            {
                cout<<temp<<endln;
                return;
            }
        }
    }
    run(i,1,26)
    {
        run(j,1,26)
        {
            run(k,1,26)
            {
                temp="";
                temp+=char(96+i);
                temp+=char(96+j);
                temp+=char(96+k);
                if(mapp[temp]==0)
                {
                    cout<<temp<<endln;
                    return;
                }
            }
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