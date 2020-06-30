#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
#define pi 3.14159265358979323846
using namespace std;
 
using namespace std;
 
int main()
{
 
    L x,y,z,flag=0,sum=0;
    cin>>x>>y>>z;
    
    if(y>x)
        swap(x,y);

    if(z>x || z%__gcd(x,y)!=0 )
        cout<<"False";
    else
    {
        L newguna=x,newgunb=0;

        while(newguna !=z && newgunb !=z)
        {
            L loading = min(newguna,y-newgunb);

            newgunb+=loading;
            newguna-=loading;

            if(newguna<=0)
                newguna=x;

            if(newgunb>=y)
                newgunb=0;
        }
        cout<<"True";
    }
    
    
    return 0;
}