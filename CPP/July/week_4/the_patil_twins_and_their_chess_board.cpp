#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    
    if(t==1)
        cout<<1<<endl;
    else if(t==2)
    {
        cout<<1<<" "<<1<<endl<<1<<" "<<1<<endl;
    }
    else if(t%2==0)
    {
        run(i,0,t-1)
        {
            run(j,0,t-2)
                cout<<0<<" ";
            cout<<0<<endl;
        }
    }
    else
    {
        run(i,0,t-1)
        {
            run(j,0,t-2)
                cout<<(i+j)%2<<" ";
            cout<<(i+j)%2<<endl;
        }
    }
    
    return 0;
}
