#include <iostream>
#include <vector>
#include <string>
//#include <algorithm>
//#include <iomanip>
#include <math.h>
//#include <unistd.h> for sleep
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    LL t,i,j,sum=0;
    cin>>t;
    while(t--)
    {
        LL n;
        cin>>n;

        vector<int>A(n,0);

        j=n;
        i=0;
        while(j>0)
        {
            A[i]=8;
            j-=4;
            i++;
            
        }
        while(i<n)
        {
            A[i]=9;
            i++;
        }
        for(i=A.size()-1;i>=0;i--)
        {
            cout<<A[i];
        }
        cout<<endl;
    }
    return 0;
}
