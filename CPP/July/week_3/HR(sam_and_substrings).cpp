#include <iostream>
//#include <vector>
#include <string>
#include <algorithm>
//#include <iomanip>
#include <math.h>
#define LL long long
#define L long
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define mod 1000000007
using namespace std;
  
int main()
{
 
    LL t=0,i,n,sum=0;
    string A;
    cin>>A;
    n=A.size();

    for(i=n-1;i>=0;i--)
    {
        t=(t*10+1)%mod;
        sum=(sum + (A[i]-'0')*(i+1)*t)%mod;
    }

    cout<<sum<<endl;
    return 0;
}
