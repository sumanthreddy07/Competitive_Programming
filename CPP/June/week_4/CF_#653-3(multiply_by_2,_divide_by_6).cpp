#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
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
 
    L t,i,j,sum=0;
    cin>>t;
    while(t--)
    {
        LL n,flag=0;
        cin>>n;

        do
        {
            if(n==1)
            {
                cout<<flag<<endl;
                break;
            }
            if(n%3!=0)
            {
                cout<<-1<<endl;
                break;
            }

            if(n%6==0)
                n/=6;
            else
                n*=2;

            flag++;

        }while(1);

    }
    return 0;
}