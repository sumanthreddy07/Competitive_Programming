#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define mod 1000000007

using namespace std;

int main()
{
    int m;

    cin>>m;

    while(m--)
    {
        int i,n;
        long long sum=0;
        cin>>n;
        
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        sort(arr,arr+n,greater<int>());

        for(int i=0;i<n;i++)
        {
            if(i<=arr[i])
            {
                arr[i]=arr[i]-i;
            }
            else
            {
                arr[i]=0;
            }
            sum+=arr[i];
            
        }
        sum=sum%mod;
        cout<<sum<<endl;
    }

    return 0;
}