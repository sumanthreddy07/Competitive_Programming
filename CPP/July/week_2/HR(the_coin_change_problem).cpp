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
  
LL coin_change(int arr[],int m,int n,int flag)
{
    int i,j,a,b;

    int brr[n/flag+1][m];

    run(i,0,m-1)
        brr[0][i]=1;
    
    run(i,1,n/flag)
        run(j,0,m-1)
        {
            a=0;
            b=0;
            if(i-arr[j]>=0)
                a=brr[i-arr[j]][j];

            if(j>=1)
                b=brr[i][j-1];
            brr[i][j]=a+b;
        }
    return brr[n/flag][m-1];
}
int main()
{
 
    L n,m,i,j,flag=251,sum=0;
    cin>>n>>m;
    int arr[m];
    run(i,0,m-1)
    {
        cin>>arr[i];
        if(flag>arr[i])
            flag=arr[i];
    }

    sum=coin_change(arr,m,n,flag);
    cout<<sum;
    return 0;
}