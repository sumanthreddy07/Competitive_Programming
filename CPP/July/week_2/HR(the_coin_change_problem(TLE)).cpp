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

using namespace std;

LL coin_change(int arr[],int m,int n)
{
    if(n==0)
        return 1;
    else if(n<0)
        return 0;
    else if(n>=1 && m<=0)
        return 0;

    return coin_change(arr,m-1,n)+coin_change(arr,m,n-arr[m-1]);
}
int main()
{
 
    L n,m,i,j,flag=0,sum=0;
    cin>>n>>m;
    int arr[m];
    run(i,0,m-1)
        cin>>arr[i];

    sum=coin_change(arr,m,n);
    cout<<sum;
    return 0;
}
