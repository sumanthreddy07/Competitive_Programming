#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
//#include <set> 

#define endl "\n"
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIRLL pair<long long,long long>
//#define PAIRII pair<int,int>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LL long long
#define L long
const LL mod=1000000007;

using namespace std;
  
int main()
{
    IOS;
    L t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        L n;
        cin>>n;
        vector<LL>A(n),B(n);

        run(i,0,n-1)
        {
            cin>>A[i];
            B[i]=A[i];
        }
        sort(B.begin(),B.end());
        LL m=*min_element(A.begin(),A.end());

        run(i,0,n-1)
        {
            if(A[i]%m!=0)
            {
                if(A[i]!=B[i])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        

    }
    return 0;
}
