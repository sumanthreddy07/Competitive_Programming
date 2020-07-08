#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>

using namespace std;
 
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL a,b,c,d,num=0;

        cin>>a>>b>>c>>d;
        num=b;
        if(b>=a)
            cout<<b;
        else
        {
            if(d>=c)
                cout<<-1;
            else
            {
                L count = ceil(float(a-b)/(c-d));
                num+= c*(count);
                cout<<num;
            }
            
        }
        cout<<endl;
    }
    return 0;
}