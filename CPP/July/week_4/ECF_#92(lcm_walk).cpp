#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
#define LL long long
#define L long
#define run(i,a,b) for(long long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
//#include <limits.h>
using namespace std;
  
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL l,r,val,val1=-1,val2=-1;
        flag=0;
        cin>>l>>r;

        if(l*2<=r)
            cout<<l<<" "<<l*2<<endl;
        else
            cout<<val1<<" "<<val2<<endl;
        
    }
    return 0;
}
