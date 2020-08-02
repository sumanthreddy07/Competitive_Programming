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
    while(t--)
    {
        LL n;
        cin>>n;

        if(n<31)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            flag=n-6-14-10;
            if(flag==6 || flag==10 || flag==14)
                cout<<6<<" "<<10<<" "<<15<<" "<<flag-1<<endl;
            else
                cout<<6<<" "<<10<<" "<<14<<" "<<flag<<endl;
            
        }
        
    }
    return 0;
}
