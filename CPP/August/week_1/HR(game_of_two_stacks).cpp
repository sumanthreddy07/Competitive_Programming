#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
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
        L n,m,count=0;
        LL x,sum=0;
        cin>>n>>m>>x;

        vector<L>A(n),B(m);
        run(i,0,n-1)
            cin>>A[i];
        run(i,0,m-1)
            cin>>B[i];
        
        L i=0,j=0;
        while(i<n && sum+A[i]<=x)
        {
            sum+=(LL)A[i];
            i++;
        }
        count=i;
        while(j<m && i>=0)
        {
            sum+=(LL)B[j];
            j++;
            while(i>0 && sum>x)
            {
                i--;
                sum-=(LL)A[i];
            }
            if(sum<=x)
                count=max(count,i+j);

        }
        cout<<count<<endl;

    }
    return 0;
}
