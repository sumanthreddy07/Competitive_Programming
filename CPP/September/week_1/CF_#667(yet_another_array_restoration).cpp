#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
//#include <set> 

#define endl "\n"
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIRLL pair<long long,long long>
//#define PAIRII pair<int,int>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LL long long
#define L long
const LL mod=1000000007;

using namespace std;

void solve()
{
    int x,y,n;
    cin>>n>>x>>y;

    if(n==2)
        cout<<x<<" "<<y<<endl;
    else
    {
        int val;
        revrun(i,1,n-1)
        {
            if((y-x)%i==0)
            {
                val=(y-x)/i;
                break;
            }
        }
        vector<int>A;
        int i,count=0;

        for(i=x;i<=y;i=i+val)
        {
            A.push_back(i);
            count++;
        }
        i=x-val;
        while(count<n && i>0)
        {
            A.push_back(i);
            count++;
            i-=val;
        }
        i=y+val;
        while(count<n)
        {
            A.push_back(i);
            i+=val;
            count++;
        }

        run(i,0,n-1)
            cout<<A[i]<<" ";
        cout<<endl;
    }
    
}
int main()
{
    IOS;
    L t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}