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
#include <limits.h>

using namespace std;
  
int main()
{
 
    L t,i,j;
    cin>>t;
    while(t--)
    {
        L n,mini=1000;
        cin>>n;
        vector<L>arr(n);

        run(i,0,n-1)
        {
            cin>>arr[i];
            if(mini>arr[i])
                mini=arr[i];
        }
        L finalsum=INT_MAX;
        run(j,0,4)
        {    
            L sum=0;
            run(i,0,n-1)
            {
                L val=arr[i]-mini+j;
    //            cout<<val<<endl;
                sum+= val/5 + (val%5)/2 + (val%5%2);
            }
            finalsum=min(sum,finalsum);
        }
        cout<<finalsum<<endl;
    }
    return 0;
}
