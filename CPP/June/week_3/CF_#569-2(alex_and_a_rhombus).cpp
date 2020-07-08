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

LL rhombus(LL t,LL n)
{
    if(n==1)
        return 1;
        
    if(n!=t)
        return n*2-1 + rhombus(t,n-1);
    else
        return n*2-1 + rhombus(t,n-1)+rhombus(t,n-1);
        
} 
int main()
{
    L t,i,j,flag=0,sum=0;
    cin>>t;
    cout<<rhombus(t,t)<<endl;
    return 0;
}
