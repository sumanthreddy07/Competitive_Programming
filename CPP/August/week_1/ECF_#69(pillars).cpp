#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
//#include <map>
//#include <iterator>
//#define ITERATOR map<L,L>::iterator iter;
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
    L n,i,maxi=0,flag=0;
    cin>>n;
    vector<L>A(n);

    run(i,0,n-1)
    {
        cin>>A[i];
        if(A[maxi]<A[i])
            maxi=i;
    }
    run(i,0,maxi-1)
        if(A[i]>A[i+1])
            flag=1;
    run(i,maxi,n-2)
        if(A[i]<A[i+1])
            flag=1;
    if(flag)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    
    return 0;
}
