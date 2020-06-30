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
  
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    vector<LL>arr(t);

    run(i,0,t-1)
        cin>>arr[i];

    run(i,0,t-1)
    {
        if(arr[i]>=arr[i-1])
            sum++;
        else
        {
            flag=max(flag,sum);
            sum=1;
        }
    }
    cout<<max(flag,sum)<<endl;
    
    return 0;
}
