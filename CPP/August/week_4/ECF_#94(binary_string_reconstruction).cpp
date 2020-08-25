#include <iostream>
#include <vector>
#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
//#include <set> 

#define endl "\n"
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIRLL pair<long long,long long>
//#define PAIRII pair<int,int>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LL long long
#define L long
const LL mod=1000000007;
using namespace std;

void solve()
{
    string A;
    cin>>A;
    L x,n=A.length();
    int flag=0;
    cin>>x;
    vector<char>B(n,'1'),C(n,'0');

    run(i,0,n-1)
    {
        if(A[i]=='0')
        {
            if(x+i<n)
                B[x+i]='0';
            if(i-x>=0)
                B[i-x]='0';
        }
    }
    if(flag==0)
    {
        run(i,0,n-1)
        {
            if(B[i]=='1')
            {
                if(i-x>=0)
                {
                    C[i-x]='1';
                }
                if(i+x<n)
                {
                    C[i+x]='1';
                }
            }
        }
        run(i,0,n-1)
        {
            if(C[i]!=A[i])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        run(i,0,n-1)
            cout<<B[i];
    }
    else
    {
        cout<<-1;
    }
    cout<<endl;

}
int main()
{
    IOS;
    L t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}