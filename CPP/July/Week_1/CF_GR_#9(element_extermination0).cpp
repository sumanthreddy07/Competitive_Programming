#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
L check(vector<LL> arr)
{
    if(arr.size()==1)
    {
        return 1;
    }
        LL temp;
        L ans=0;
        run(i,0,arr.size()-2)
            if(arr[i]<arr[i+1] && i+1<=arr.size()-2)
            {
                temp=arr[i];
                arr.erase(arr.begin()+i);
                ans=max(check(arr),ans);
                if(ans==1)
                    return ans;
                arr.insert(arr.begin()+i,temp);
                temp=arr[i+1];
                arr.erase(arr.begin()+i+1);
                ans=max(check(arr),ans);
                if(ans==1)
                    return ans;
                arr.insert(arr.begin()+i+1,temp);
            }
        return ans;
}
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n,min=0,max=0;
        cin>>n;
        vector<LL>arr(n);

        run(i,0,n-1)
        {
            cin>>arr[i];
            if(arr[min]>arr[i])
                min=i;
            if(arr[max]<arr[i])
                max=i;
        }
        if(max==n-1 || min==0)
            cout<<"YES"<<endl;
        else if(max==0 || min==n-1)
            cout<<"NO"<<endl;
        else
        {   
            flag=check(arr);
            if(flag==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }    
    }
    return 0;
}
