#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
#include <queue>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    L n,k,i,j,flag=0,sum=0,first,second;
    cin>>n>>k;

    vector<L>arr;

    run(i,0,n-1)
    {
        cin>>first>>second;
        if(second==0)
            sum+=first;
        else
        {
            arr.push_back(first);
            flag++;
        }
    }
    sort(arr.begin(),arr.end(),greater<int>());
    run(i,0,flag-1)
    {
        if(i<k)
            sum+=arr[i];
        else
            sum-=arr[i];
        
    }

    cout<<sum<<endl;
    return 0;
}
