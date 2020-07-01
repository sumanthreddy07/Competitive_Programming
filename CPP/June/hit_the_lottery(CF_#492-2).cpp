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

LL ans(LL *a,int n)
{
    LL val=0;
    val=*a/n;
    *a=*a%n;
    return val;
}
int main()
{
 
    LL t,i,j,flag=0,sum=0;
    cin>>t;
   
    sum+=ans(&t,100);
    sum+=ans(&t,20);
    sum+=ans(&t,10);    
    sum+=ans(&t,5);
    sum+=ans(&t,1);
    
    cout<<sum<<endl;
    return 0;
}
