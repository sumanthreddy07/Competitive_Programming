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
#define PAIRII pair<int,int>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LL long long
#define L long
const LL mod=1000000007;

using namespace std;

int main()
{
    IOS;
    int n,m,x,y,count=1;
    cin>>n>>m>>x>>y;
    int a=y;
    cout<<x<<" "<<y<<endl;
    
    run(i,x+1,n)
    {
        cout<<i<<" "<<y<<endl;
    }
    revrun(i,1,x-1)
    {
        cout<<i<<" "<<y<<endl;
    }
    x=1,y=1;
    while(y<=m)
    {
        if(y==a)
        {
            y++;
            continue;
        }
        if(count==1)
        {
            run(i,1,n)
                cout<<i<<" "<<y<<endl;
        }
        else
        {
            revrun(i,1,n)
                cout<<i<<" "<<y<<endl;
            
        }
        y++;
        count=1-count;
    }
    return 0;
}
