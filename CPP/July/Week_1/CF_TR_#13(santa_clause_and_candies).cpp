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
 
    L t,i=1,j,flag=0,sum=0;
    cin>>t;
    
    vector<LL> arr;
    if(t==1)
    {
        cout<<1<<endl<<1<<endl;
        return 0;
    }
    while(t>=i)
    {
        t-=i;
        arr.push_back(i);
        i++;
    }
    arr[arr.size()-1]+=t;

    cout<<arr.size()<<endl;
    run(i,0,arr.size()-1)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
