#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
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
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        flag=-1;
        int n,m;
        cin>>n>>m;

        int arr[n],brr[m];
        run(i,0,n-1)
            cin>>arr[i];
        run(i,0,m-1)
        {
            cin>>brr[i];
            run(j,0,n-1)
                if(arr[j]==brr[i])
                    flag=i;
        }
        
        if(flag!=-1)
            cout<<"YES"<<endl<<1<<" "<<brr[flag]<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
