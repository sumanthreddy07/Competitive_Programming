#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,b,a) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    LL t,i,j,flag=0,sum=0;
    cin>>t;

    vector<LL>arr(t),out(t,1);
    run(i,0,t-1)
        cin>>arr[i];

    run(i,1,t-1)
    {
        if(arr[i]>arr[i-1])
            out[i]=out[i-1]+1;
    }
    revrun(i,t-2,0)
    {
        if(arr[i]>arr[i+1])
        {
            out[i]=max(out[i+1]+1,out[i]);
        }
    }
    run(i,0,t-1)
    {
        sum+=out[i];
    }
    cout<<sum;
    return 0;
}
