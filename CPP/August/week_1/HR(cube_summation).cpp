#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
#include <map>
#include <iterator>
#include <numeric>
#define ITERATOR map<long long,long long>::iterator
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
    int t;
    cin>>t;
    while(t--)
    {
        map<LL,LL>M;
        int n,m;
        cin>>n>>m;
        LL x,y,z,x2,y2,z2;
        LL val;
        while(m--)
        {
            string S;
            cin>>S;

            if(S=="UPDATE")
            {
                cin>>x>>y>>z>>val;
                M[x-1 + n*(y-1) + n*n*(z-1)]=val;
            }   
            else
            {
                cin>>x>>y>>z>>x2>>y2>>z2;
                LL sum=0;
                for(map<LL,LL>::iterator ite=M.begin();ite!=M.end();ite++)
                {
                    LL num=ite->first;
                    LL xval=num%n,yval=(num/n)%n,zval=(num/(n*n));
                    LL val2=ite->second;
                    xval++;
                    yval++;
                    zval++;
                    if(xval<=x2 && xval>=x && yval<=y2 && yval>=y && zval<=z2 && zval>=z)
                        sum+=val2;
                }
                cout<<sum<<endl;
            }
             
        }

    }
    return 0;
}
