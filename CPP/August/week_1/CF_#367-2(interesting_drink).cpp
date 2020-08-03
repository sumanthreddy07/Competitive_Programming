#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
  
int main()
{
    IOS;
    L n,i,j,q,flag=0,maxi=0;
    cin>>n;
    vector<L>A(n);
    run(i,0,n-1)
    {
        cin>>A[i];
        maxi=max(maxi,A[i]);
    }
    vector<int>B(maxi+1,0);
    run(i,0,n-1)
        B[A[i]]++;
    run(i,1,B.size()-1)
        B[i]=B[i]+B[i-1];

    cin>>q;

    run(i,1,q)
    {
        cin>>j;
        if(j>maxi)
            cout<<B[maxi]<<endl;
        else
            cout<<B[j]<<endl;
    }
    return 0;
}
