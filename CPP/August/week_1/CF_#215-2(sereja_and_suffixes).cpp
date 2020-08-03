#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
//#include <map>
#include<set>
//#include <iterator>
//#define ITERATOR map<L,L>::iterator iter;
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
  
int main()
{
    IOS;
    L n,m,val;
    cin>>n>>m;
    vector<L>A(n);
    set<L>B;
    run(i,0,n-1)
    {
        cin>>A[i];
    }
    vector<L>DP(n+1,0);

    revrun(i,0,n-1)
    {
        if(B.find(A[i])==B.end())
        {
            B.insert(A[i]);
            DP[i]=DP[i+1]+1;
        }
        else
        {
            DP[i]=DP[i+1];
        }
    }
    run(i,0,m-1)
    {
        cin>>val;
        cout<<DP[val-1]<<endl;    
    }
    return 0;
}
