#include <iostream>
#include <limits.h>
//#include <vector>
//#include <numeric>
//#include <string>
#include <algorithm>
//#include <iomanip>
#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;

bool isprime(LL A) {
    LL upperLimit = (LL)(sqrt(A));
    if(A==1)
        return 0;
    for (int i = 2; i <= upperLimit; i++)
    {

        if (i < A && A % i == 0) return 0;
    }
    return 1;
}
int main()
{
 
    LL t,i,j,flag=0,sum=0,num1;
    cin>>t;
    while(t--)
    {
        LL n;
        cin>>n;

        if(n%2==0)
            cout<<n/2<<" "<<n/2<<endl;
        else if(isprime(n))
            cout<<1<<" "<<n-1<<endl;
        else
        {
            for(i=2;i<=(n+1)/2;i++)
            {
                if(n%i==0)
                    break;
            }
        cout<<n/i<<" "<<n-n/i<<endl;
        }
    }
    return 0;
}
