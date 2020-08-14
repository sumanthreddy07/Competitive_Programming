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

#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIRLL pair<long long,long long>
//#define PAIRII pair<int,int>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
const LL mod=1000000007;

using namespace std;
  
int main()
{
    IOS;
    L t;
    cin>>t;
    while(t--)
    {
        int m,n,count=0;
        cin>>n>>m;
        char DP[n][m];

        run(i,0,n-1)
            run(j,0,m-1)
            {
                cin>>DP[i][j];
            }
        revrun(i,0,n-1)
            revrun(j,0,m-1)
            {
                if(i==n-1 && j==m-1)
                    continue;
                
                if( DP[i][j]=='D' && DP[i+1][j]=='C' && i+1<n)
                {
                    DP[i][j]='C';
                    continue;
                }
                if( DP[i][j]=='R' && DP[i][j+1]=='C' && j+1<m)
                {
                    DP[i][j]='C';
                    continue;
                }

                count++;
                DP[i][j]='C';

            }
        cout<<count<<endl;

    }
    return 0;
}
