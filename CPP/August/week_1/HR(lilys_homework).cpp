#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
#include <map>
//#include <iterator>
//#define ITERATOR map<L,L>::iterator iter;
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
    LL n;
    cin>>n;
    vector<LL>arr(n),arrinc(n),arrdec(n);
    map<LL,LL>A,B;
    run(i,0,n-1)
    {
        cin>>arr[i];
        arrinc[i]=arr[i];
        arrdec[i]=arr[i];
        A[arr[i]]=i;
        B[arr[i]]=i;
    }
    sort(arr.begin(),arr.end());
    L count1=0,count2=0,mini;
    run(i,0,n-1)
    {
        if(arr[i]!=arrinc[i])
        {
            mini= A[arr[i]];
            A[arr[i]]=i;
            A[arrinc[i]]=mini;
            swap(arrinc[i],arrinc[mini]);
            count1++;
        }
    }
    sort(arr.begin(),arr.end(),greater<int>());
    run(i,0,n-1)
    {
        if(arr[i]!=arrdec[i])
        {
            mini= B[arr[i]];
            B[arr[i]]=i;
            B[arrdec[i]]=mini;
            swap(arrdec[i],arrdec[mini]);
            count2++;
        }
    }
    cout<<min(count1,count2)<<endl;
    
    return 0;
}
