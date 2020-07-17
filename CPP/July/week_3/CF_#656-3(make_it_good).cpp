#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n,maxi=0,incseq=0;
        cin>>n;
        flag=-1;
        vector<LL>A(n);
        
        run(i,0,n-1)
        {
            cin>>A[i];
        }

        if(A.size()==1)
        {
            cout<<0<<endl;
        }
        else
        {
            revrun(i,1,n-1)
            {
                if(A[i]>A[i-1])
                {
                   flag=i;
                   break;
                }
            }
            if(flag==-1)
            {
                cout<<0<<endl;
            }
            else
            {
                while(A[flag]>=A[flag-1] && flag-1>=0)
                    flag--;

                cout<<flag<<endl;
            }
            
        }

    }
    return 0;
}
