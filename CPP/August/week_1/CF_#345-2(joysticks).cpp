#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
//#include <map>
//#include <iterator>
//#define ITERATOR map<L,L>::iterator iter;
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
  
int main()
{
    IOS;
    L a,b,time=0;
    cin>>a>>b;

    if(a<2 && b<2)
        cout<<0<<endl;
    else
    {
        while(a>=0 && b>=0)
        {
            if(a<b)
                a+=1,b-=2;
            else
                b+=1,a-=2;
            if(a<0 || b<0)
                break;
            time++;   
        }
        cout<<time-1<<endl;
    }
    return 0;
}
