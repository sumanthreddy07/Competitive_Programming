#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    LL n,i,k,min_val;
    cin>>n>>k;

    vector<LL>arr(n);

    run(i,0,n-1)
        cin>>arr[i];

    sort(arr.begin(),arr.end());
    min_val=arr[n-1]-arr[0];
    run(i,k-1,n-1)
        min_val=min(min_val,arr[i]-arr[i-(k-1)]);

    cout<<min_val;
    return 0;
}
