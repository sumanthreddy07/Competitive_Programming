#include <iostream>
#include <vector>
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
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        L x,y,z,a,count=0,b;
        cin>>x>>y>>z;

        a=max(x,max(y,z));
        b=min(x,min(y,z));
        if(a==x)
            count++;
        if(a==y)
            count++;
        if(a==z)
            count++;

        if(count<2)
            cout<<"NO"<<endl;
        else if(count==2)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<b<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<a<<" "<<a<<endl;
        }
    }
    return 0;
}
