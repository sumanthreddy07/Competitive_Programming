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
#define PAIR pair<int,int>
#define pi 3.14159265358979323846
using namespace std;
  
int main()
{
 
    L t,i,j,sum=0;
    cin>>t;
    while(t--)
    {
        L n,flag=0;
        cin>>n;
        vector<PAIR> arr(n);

        run(i,0,n-1)
        {
            cin>>arr[i].first>>arr[i].second;
        }
        sort(arr.begin(),arr.end());

        int prev1=0;
        int prev2=0;
        string final;
        run(i,0,n-1)
        {
            if(arr[i].first>=prev1 && arr[i].second>=prev2)
            {
                L x,y;
                x=arr[i].first-prev1;
                y=arr[i].second-prev2;

                final+=string(x,'R');
                final+=string(y,'U');
            
                prev1=arr[i].first;
                prev2=arr[i].second;
            }
            else
            {
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }

        if(flag==0)
            cout<<"YES\n"<<final<<endl;

    }
    return 0;
}
