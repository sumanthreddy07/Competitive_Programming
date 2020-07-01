#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#define LL long long
#define L long
//#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;

L fibo(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);    
}
int main()
{
    int t;
    cin>>t;
    
    cout<<fibo(t)<<endl;
    return 0;
}
