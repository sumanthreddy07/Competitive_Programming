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
        int count=0,flag;
        LL r,g,b,w;
        cin>>r>>g>>b>>w;
        count=r%2+g%2+b%2;

        if(count==3 || count==0)
        {
            cout<<"Yes"<<endl;
        }
        else if(count==2)
        {
            if(r==0 || g==0 || b==0)
            {
                cout<<"No"<<endl;
            }
            else
            {
                if(w%2==0)
                    cout<<"No"<<endl;
                else
                    cout<<"Yes"<<endl;
            }
        }
        else if(count==1)
        {
            if(w%2==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
