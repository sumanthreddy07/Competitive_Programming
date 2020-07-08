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
 
    L t,i,j,sum=0;
    cin>>t;
    while(t--)
    {
        L n,flag=1;
        cin>>n;

        vector<LL> arr(n);

        run(i,0,n-1)
            cin>>arr[i];
        if(arr[0])
            flag=arr[0]/abs(arr[0]);

        run(i,0,n-1)
        {
            arr[i]=abs(arr[i])*flag;
            flag=flag*-1;
        }

        run(i,0,n-1)
            cout<<arr[i]<<" ";

        cout<<endl;
    }
    return 0;
}
