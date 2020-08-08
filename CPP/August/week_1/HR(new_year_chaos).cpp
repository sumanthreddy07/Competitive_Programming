#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
#include <limits.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
  
int main()
{
    IOS;
    L t,n,i;
    cin>>t;
    while(t--)
    {
        L count=0,flag=0;
        cin>>n;
        vector<LL>arr(n);
        run(i,0,n-1)
            cin>>arr[i];
        
        revrun(i,0,n-1)
        {
            if(arr[i]-(i+1)>2)
            {
                flag=1;
                break;
            }
            L val = arr[i]-2;
            val = max(val,L(0));
            run(j,val,i-1)
            {
                if(arr[j]>arr[i])
                    count++;
            }
        }
        if(flag==1)
            cout<<"Too chaotic"<<endl;
        else
            cout<<count<<endl;
        
    }
    
    return 0;
}
