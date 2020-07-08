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
 
    LL t,i,j=0,flag=0,sum=0;
    cin>>t;
    
    vector<LL> arr(t);

    run(i,0,t-1)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            flag=1;
            sum+=1;
        }
        else
            sum+=(abs(arr[i])-1);
        
        if(arr[i]<0)
            j++;
        
    }
    if(j%2==0)
        cout<<sum<<endl;
    else
    {
        if(flag==1)
            cout<<sum;
        else
            cout<<sum+2<<endl;
    }
    
    return 0;
}
