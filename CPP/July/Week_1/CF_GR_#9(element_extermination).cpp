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
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n;
        cin>>n;

        vector<LL>arr(n);

        run(i,0,n-1)
            cin>>arr[i];

        if(arr[0]<arr[n-1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}
