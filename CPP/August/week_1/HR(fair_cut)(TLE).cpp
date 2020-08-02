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
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
  
L fun(vector<LL>&arr,int value,int count,int n)
{
    if(value==-1)
        return count;
    run(i,0,n-1)
    {
        if(arr[i]==value)
        {
            if(value-(i+1)>2)
                return INT_MIN;
            else
            {
                count+=value-(i+1);
                arr.erase(arr.begin()+i);
                break;
            }
        }
    }
    return fun(arr,value-1,count,arr.size());
}
int main()
{
    IOS;
    L t,n,i,count,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<LL>arr(n);
        run(i,0,n-1)
            cin>>arr[i];
        count=0,flag=0;
        count=fun(arr,n,count,n);

        if(count<0)
            cout<<"Too chaotic"<<endl;
        else
            cout<<count<<endl;    
    }
    return 0;
}
