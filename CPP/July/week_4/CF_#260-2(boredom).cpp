#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
#include <iterator>
#include <map>
#define ITERATOR map<L,L>::iterator
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const int maxn = 1111111;

int main()
{
    IOS;
    LL t,maxi=0;
    cin>>t;
    vector<LL>A(t);
    vector<PAIR>C;
    map<L,L>B;
    run(i,0,t-1)
    {
        cin>>A[i];
        B[A[i]]++;
    }
    ITERATOR iter;
    for(iter=B.begin();iter!=B.end();iter++)
        C.push_back(make_pair(iter->first,iter->second));
    
    LL DP[100000];
    
    run(i,0,C.size()-1)
    {
        L prev = i-1;
        while(prev>=0 && C[prev].first+1==C[i].first)
            prev--;
        if(prev==-1)
            DP[i] = 1LL*C[i].first*C[i].second;
        else
            DP[i] = DP[prev] + 1LL*C[i].first*C[i].second;
        if(i!=0)
            DP[i]=max(DP[i],DP[i-1]);
    }

    cout<<DP[C.size()-1]<<endl;
    return 0;
}
