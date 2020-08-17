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
        L n,count=0,maxi=0;
        cin>>n;
        vector<int>A(n);
        run(i,0,n-1)
        {
            cin>>A[i];
            if(A[i]>A[maxi])
            {
                count=1;
                maxi=i;
            }
            else if(A[i]==A[maxi])
                count++;
        }
        if(count==n)
            cout<<n<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
