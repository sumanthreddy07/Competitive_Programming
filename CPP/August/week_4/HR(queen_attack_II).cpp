#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
#include <map>
//#include <set> 

#define endl "\n"
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIRLL pair<long long,long long>
#define PAIRII pair<int,int>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LL long long
#define L long
const LL mod=1000000007;

using namespace std;
  
int main()
{
    IOS;
    int n;
    L k,count=0;
    cin>>n>>k;
    map<PAIRII,int>A;
    int x,y,tempx,tempy;
    cin>>x>>y;
    while(k--)
    {
        cin>>tempx>>tempy;
        A[{tempx,tempy}]=1;
    }
    run(i,x+1,n)
    {
        if(A[{i,y}]==1)
            break;
        count++;
    }
    revrun(i,1,x-1)
    {

        if(A[{i,y}]==1)
            break;
        count++;
    }
    run(i,y+1,n)
    {
        if(A[{x,i}]==1)
            break;
        count++;
    }
    revrun(i,1,y-1)
    {
        if(A[{x,i}]==1)
            break;
        count++;
    }
    int val=min(x-1,y-1);
    
    run(i,1,val)
    {
        if(A[{x-i,y-i}]==1)
            break;
        count++;
    }
    val=min(n-x,y-1);
    run(i,1,val)
    {
        if(A[{x+i,y-i}]==1)
            break;
        count++;
    }
    val=min(x-1,n-y);
    run(i,1,val)
    {
        if(A[{x-i,y+i}]==1)
            break;
        count++;
    }
    val=min(n-x,n-y);
    run(i,1,val)
    {
        if(A[{x+i,y+i}]==1)
            break;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
