#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
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
    L n,k;
    cin>>n>>k;
    vector<L>A(n);

    run(i,0,n-1)
        cin>>A[i];
    sort(A.begin(),A.end());
    L start=0,end=1,count=0;
    while(end<n)
    {
        if(A[end]-A[start] < k)
            end++;
        else if(A[end]-A[start]>k)
        {
            start++;
            if(start==end)
                end++;
        }
        else
        {
            count++;
            end++;
        }
    }
    cout<<count<<endl;

    return 0;
}
