#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    L n,x,y;
    cin>>n>>x>>y;
    L army=0,mana=x*(n-1);
    if(n==0)
        cout<<0<<endl;
    vector<L>A(n);
    run(i,0,n-1)
    {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    run(i,0,n-1)
    {
        if(army<A[i])
        {
            L addition = A[i]-army;
            mana+=addition*y;
            army+=addition;
            army+=A[i];
        }
        else
            army+=A[i];
    }
    cout<<mana<<endl;
    return 0;
}
