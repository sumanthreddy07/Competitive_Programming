#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
#define pi 3.14159265358979323846
using namespace std;
  
int main()
{
 
    L n,k,i,j,flag,sum=0;
    
    cin>>n>>k;

    vector<L> arr(n);

    run(i,0,n-1)
        cin>>arr[i];
    
    run(i,1,n-1)
    {
        flag=max(L(0),max(arr[i],k-arr[i-1]));
        sum+=flag-arr[i];
        arr[i]=flag;
    }
    
    cout<<sum<<endl;
    run(i,0,n-1)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
