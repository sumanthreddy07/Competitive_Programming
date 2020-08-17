#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
//#include <set> 

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
    int t;
    int A[1002]={0};
    cin>>t;
    while(t--)
    {
        int n,val;
        cin>>n;
        vector<int>B(n),C;
        run(i,0,n-1)
            cin>>B[i];

        run(i,0,n*2-1)
        {
            run(j,0,1001)
            {
                A[j]=0;
            }
            run(j,0,n-1)
            {
                A[B[j]]++;
            }
            run(j,0,1001)
            {
                if(A[j]==0)
                {
                    val=j;
                    break;
                }
            }
            if(val>=n)
            {
                run(j,0,n-1)
                {
                    if(B[j]!=j)
                    {
                        B[j]=val;
                        C.push_back(j+1);
                        break;
                    }
                }
            }
            else
            {
                B[val]=val;
                C.push_back(val+1);
            }
            
        }
        int s=C.size();
        cout<<s<<endl;
        run(i,0,s-1)
            cout<<C[i]<<" ";
        cout<<endl;

    }
    return 0;
}
