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
 
    L n,v,i,j,flag=0,sum;
    cin>>n>>v;
    int container = v,distance = v;
    
    if(n-1<=v)
    {
        cout<<n-1<<endl;
        return 0;
    }
    sum=v-1;
    run(i,1,n-v)
        sum+=i;

    cout<<sum<<endl;
    return 0;
}
