#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    L t,i,j,sum=0;
    cin>>t;
    while(t--)
    {
        LL n,flag=0,m,a,b;

        cin>>a>>b>>n>>m;

        if(a+b<n+m)
        {
            cout<<"No"<<endl;
        }
        else if(min(a,b)>=m)
            cout<<"Yes"<<endl;
        else
        {
            while(m!=0)
            {
                if(n==0 || a==0 || b==0)
                    break;

                if(abs(a-b)<=n)
                {

                    if(a>b)
                    {
                        b-=m/2;
                        m-=m/2;

                        n-=abs(a-b);
                        a-=(a-b);
                    }
                    else
                    {
                        a-=m/2;
                        m-=m/2;

                        n-=abs(a-b);
                        b-=(b-a);
                    }
                }
                else
                {
                    break;
                }
                   
                
            }
            if(m==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;   
        }
    }
    return 0;
}
