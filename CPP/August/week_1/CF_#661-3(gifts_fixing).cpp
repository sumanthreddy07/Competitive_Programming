#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
#include <limits.h>
//#include <map>
//#include <iterator>
//#define ITERATOR map<L,L>::iterator iter;
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
  
int main()
{
    IOS;
    L t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<LL>A(n),B(n);
        LL mina=INT_MAX,minb=INT_MAX,sum=0;

        run(i,0,n-1)
        {
            cin>>A[i];
            mina=min(mina,A[i]);
        }
        run(i,0,n-1)
        {
            cin>>B[i];
            minb=min(minb,B[i]);
        }
        run(i,0,n-1)
        {
            LL diffa=A[i]-mina,diffb=B[i]-minb;
            sum+=max(diffa,diffb);            
        }

        cout<<sum<<endl;
    }
    return 0;
}
