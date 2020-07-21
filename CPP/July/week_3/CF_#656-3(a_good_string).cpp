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
//#include <unistd.h> for sleep 

using namespace std;

LL dowork(string A,LL start,LL end,char C)
{
    if(start==end)
    {
        if(A[start]!=C)
            return 1;
        else
            return 0;
    }

    LL i,size=end-start+1,front=0,back=0;

//    cout<<C;
    run(i,0,size/2-1)
    {
        if(A[start+i]==C)
            front++;
        if(A[end-i]==C)
            back++;
    }
    front=size/2-front+dowork(A,(start+end+1)/2,end,char(C+1));
    back=size/2-back+dowork(A,start,(start+end-1)/2,char(C+1));

    return min(front,back);
}
int main()
{
 
    LL t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n;
        cin>>n;
        string A;
        cin>>A;

        if(A.size()==1)
        {
            if(A[0]!='a')
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
        else
        {
            sum=dowork(A,0,n-1,'a');
            cout<<sum<<endl;
        }
    }
    return 0;
}
