#include <iostream>
//#include <vector>
#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
#include <map>
//#include <set> 

#define endl "\n"
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIRLL pair<long long,long long>
//#define PAIRII pair<int,int>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LL long long
#define L long
const LL mod=1000000007;

using namespace std;
  
int main()
{
    IOS;
    L t;
    cin>>t;
    while(t--)
    {
        LL n,sum=0,count=0,val=0;
        cin>>n;
        string A;
        cin>>A;
        map<int,int>M;
        M[0]++;
        run(i,0,n-1)
        {
            sum+=A[i]-'0'-1;
            val+=M[sum];
            M[sum]++;
        }

        cout<<val<<endl;

    }
    return 0;
}
