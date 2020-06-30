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
 
    LL t,i,j;
    cin>>t;
    while(t--)
    {
        LL n,k,min=-1;
        cin>>n>>k;

        map<LL,LL> mapp;
        vector<LL> arr(n,0);

        run(i,0,n-1)
        {
            cin>>arr[i];
            j=arr[i]%k;
            
            if(j!=0)
                mapp[j]++;

        }
        LL ans=0,flag,sum;
        for(auto itr=mapp.begin();itr!=mapp.end();itr++)
        {
            flag=itr->first;
            sum=(mapp[flag]-1)*k+((k-flag)%k)+1;
            ans=max(sum,ans);
        }
        
        cout<<ans<<endl;    
    }
    return 0;
}