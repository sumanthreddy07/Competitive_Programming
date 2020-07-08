#include <iostream>
//#include <vector>
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
 
    L t,i,j,flag=0;
    cin>>t;
    while(t--)
    {
        LL n,r;
        unsigned long long sum=0;
        cin>>n>>r;

        if(n<=r)
        sum=((n)*(n-1))/2+1;
        else
        sum=(r*(r+1))/2;
        
        cout<<sum<<endl;
    }
    return 0;
}
