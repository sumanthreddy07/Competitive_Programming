#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int main()
{
 
    long long int t,i,n,x,sum=0,count=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        sum=0;
        count=0;

        vector<int> arr(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());

        for(i=0;i<n;i++)
        {
            if(arr[i]>=x)
            {
                count++;
                sum+=arr[i]-x;
            }
            else
            {
                if(sum+arr[i]>=x && sum>0)
                {
                    sum-=(x-arr[i]);
                    count++;
                }
            }
           
        }
        cout<<count<<endl;
    }
    return 0;
}