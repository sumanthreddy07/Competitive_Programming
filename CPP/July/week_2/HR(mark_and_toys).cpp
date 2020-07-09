#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    LL n,k,i,j=0,flag=0,sum=0;
    cin>>n>>k;

    vector<LL> prices(n);

    run(i,0,n-1)
        cin>>prices[i];

    sort(prices.begin(),prices.end());

    while(sum<=k)
    {
        sum+=prices[j];
        j++;
        flag++;
    }
    cout<<flag-1;
    return 0;
}
