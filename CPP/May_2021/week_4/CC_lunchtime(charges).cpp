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
    int n,k,x,sum=0;
    cin>>n>>k;

    string s;
    cin>>s;

    vector<int>A;

    run(i,0,k-1)
    {
        cin>>x;
        A.push_back(x);
    }
    if(n==1)
    {
        run(i,0,k-1)
            cout<<0<<endln;

        return;
    }

    run(i,1,n-1)
    {
        if(s[i]==s[i-1])
            sum+=2;
        else
            sum+=1;
    }

    run(i,0,k-1)
    {
        s[A[i]-1] = 49 - (s[A[i]-1] - '0');
     
        if(A[i]==1)
        {
            if(s[0]==s[1])
                sum+=1;   
            else
                sum-=1;
        }
        else if(A[i]==n)
        {
            if(s[n-1]==s[n-2])
                sum+=1;   
            else
                sum-=1;
        }
        else
        {
            if(s[A[i]-1]==s[A[i]])
                sum+=1;   
            else
                sum-=1;

            if(s[A[i]-1]==s[A[i]-2])
                sum+=1;   
            else
                sum-=1;
        }

        cout<<sum<<endln;
        
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