#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
//#include <set> 

#define endl "\n"
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIRLL pair<long long,long long>
//#define PAIRII pair<int,int>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LL long long
#define L long
const LL mod=1000000007;

using namespace std;

int main()
{
    IOS;
    L n,flag=-1,count=0,one=0;
    cin>>n;
    vector<LL>A(n),B(n),C(n,0);

    run(i,0,n-1)
    {
        cin>>A[i];
        B[i]=A[i];
    }
    sort(B.begin(),B.end());
    run(i,0,n-1)
    {
        if(B[i]!=A[i])
            count++,flag=i;
    }
    if(count==0)
        cout<<"yes"<<endl;
    else if(count==2)
    {
        run(i,0,n-1)
        {
            if(B[i]!=A[i])
            {
                count=i;
                break;
            }
        }
        cout<<"yes"<<endl;
        cout<<"swap "<<count+1<<" "<<flag+1<<endl;
    }
    else
    {
        run(i,0,n-1)
        {
            if(B[i]!=A[i])
            {
                count=i;
                break;
            }
        }
        run(i,count,flag)
        {
            if(B[flag+count-i]!=A[i])
            {
                one=1;
                break;
            }
        }
        if(one==0)
        {
            cout<<"yes"<<endl;
            cout<<"reverse "<<count+1<<" "<<flag+1;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
    }
    
    
    return 0;
}
