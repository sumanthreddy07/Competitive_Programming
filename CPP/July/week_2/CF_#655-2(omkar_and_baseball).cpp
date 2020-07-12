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
 
    LL t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n,first=-1,second;
        cin>>n;
        vector<LL> arr(n),count(n,0);

        run(i,0,n-1)
        {
            cin>>arr[i];
            if(arr[i]==i+1)
                count[i]=1;
            else
                count[i]=0;
            

            if(count[i]==0)
            {
                if(first==-1)
                    first=i;
                second=i;
            }
        }
        if(first==-1)
            cout<<0<<endl;
        else
        {
            flag=0;
            run(i,first,second)
            {
                if(count[i]==1)
                    flag++;
            }
            if(flag==0)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
    return 0;
}
