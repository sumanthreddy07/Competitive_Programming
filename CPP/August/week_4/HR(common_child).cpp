#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
#include <set> 

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

void solve()
{
    string A,B;
    cin>>A>>B;
    int n=A.length(),m=B.length();
    vector<vector<int>>DP(n+1,vector<int>(m+1,0));

    run(i,0,n-1)
    {
        run(j,0,m-1)
        {
            if(A[i]==B[j])
                DP[i+1][j+1]=DP[i][j]+1;
            else
                DP[i+1][j+1]=max(DP[i][j+1],DP[i+1][j]);
            
        }
        
    }
    cout<<DP[n][m]<<endl;
}
int main()
{
    IOS;
    L t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}