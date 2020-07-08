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
 
    LL t,i,j,flag=0,sum=0;
    cin>>t;
    if(t%2==1)
        cout<<0<<endl;
    else
    {
        i=pow(2,t/2);
        cout<<i<<endl;
    }
    
    return 0;
}
