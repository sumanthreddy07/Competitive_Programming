#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
#define pi 3.14159265358979323846
using namespace std;

int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n,a=-1,b=-1,c=-1;
        cin>>n;
        set<LL> arr;

        for(L i=2;i*i<=n;i++)
        {
            if(n%i==0 && !arr.count(i))
            {
                arr.insert(i);
                n/=i;
                break;
            }
        }
        for(L i=2;i*i<=n;i++)
        {
            if(n%i==0 && !arr.count(i))
            {
                arr.insert(i);
                n/=i;
                break;
            }
        }

        if(arr.size()<2 || arr.count(n) || n==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            arr.insert(n);

            for(auto itr: arr)
                cout<<itr<<" ";
            cout<<endl;
        }
        
    }
    return 0;
}
