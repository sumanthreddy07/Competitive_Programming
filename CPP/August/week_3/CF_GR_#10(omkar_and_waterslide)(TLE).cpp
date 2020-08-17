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
  
LL right(vector<LL>A,L start,L end)
{
    if(start>=end)
        return 0;

    LL maxi=start;
    run(i,start,end)
    {
        if(A[maxi]<A[i])
            maxi=i;
    }
    LL count=0;
    LL j,i=end;

    while(i>maxi)
    {
        if(A[maxi]-A[i]==0)
        {
            i--;
            continue;
        }
        j=i;

        while(j>maxi && A[maxi]-A[j]>0)
        {
            A[j]++;
            j--;
            if(A[j+1]-1<A[j])
                break;
        }
        count++;
/*        run(i,0,A.size()-1)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl;
*/
    }
    
    return count+right(A,start,maxi-1);
}
int main()
{
    IOS;
    L t;
    cin>>t;
    while(t--)
    {
        L n,maxi=0;
        LL count=0;
        cin>>n;
        vector<LL>A(n);
        run(i,0,n-1)
        {
            cin>>A[i];
        }
        count=right(A,0,n-1);
        cout<<count<<endl;

    }
    return 0;
}
