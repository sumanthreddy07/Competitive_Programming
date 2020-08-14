#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
#include <unordered_map>
//#include <set> 

//#define revrun(i,a,b) for(long i=b;i>=a;i--)
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
        L n,max=0,count=0;
        cin>>n;
        vector<L>A(n);
        unordered_map<L,L>M;
        run(i,0,n-1)
        {
            cin>>A[i];
            M[A[i]]++;
        }
        auto iter=M.begin();
        for(iter=M.begin();iter!=M.end();iter++)
        {
            if(max<iter->second)
            {
                count=1;
                max=iter->second;
            }
            else if(max==iter->second)
                count++;
        }
        cout<<(n-count)/(max-1)-1<<endl;

    }
    return 0;
}
