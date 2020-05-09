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
        L n;
        cin>>n;

        if(n<4)
            cout<<-1;
        else
        {
            if(n%2==0)
            {
                for(L i=1;i<n-3;i+=2)
                    cout<<i<<" ";
            }
            else
            {
                for(L i=2;i<n-3;i+=2)
                    cout<<i<<" ";
            }
            cout<<n-1<<" "<<n-3<<" ";

            for(L i=n;i>0;i-=2)
                cout<<i<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}