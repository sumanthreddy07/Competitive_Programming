#include <iostream>
#include <vector>
#include <string>
//#include <algorithm>
//#include <iomanip>
#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
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
    string S;
    cin>>S;
    int i,n=S.length();

    int x=floor(sqrt(n)),y=ceil(sqrt(n));
    vector<string>A(y);
    if(x*y<n)
    {
        for(i=0;i<x*y;i++)
            A[i%y].push_back(S[i]);
        for(i=x*y;i<n;i++)
            A[i%x].push_back(S[i]);
    }
    else
    {
        for(i=0;i<n;i++)
            A[i%y].push_back(S[i]);    
    }
    
    for(i=0;i<A.size();i++)
        cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}
