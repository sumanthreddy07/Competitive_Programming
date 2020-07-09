#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    L t,m,n,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;

        vector<L>cost(n);

        run(i,0,n-1)
            cin>>cost[i];
        
        run(i,0,n-2)
            run(j,i+1,n-1)
                if(cost[i]+cost[j]==m)
                {
                    flag=i;
                    sum=j;
                }
        cout<<flag+1<<" "<<sum+1<<endl;
    }
    return 0;
}
