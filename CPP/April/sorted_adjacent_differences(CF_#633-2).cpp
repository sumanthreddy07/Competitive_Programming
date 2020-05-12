#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    long int t;
    cin>>t;
    while(t--)
    {

        long n;
        cin>>n;
        long long arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        sort(arr,arr+n);

        if(n%2==1)
        {
            cout<<arr[n/2];
            for(long int i=1;i<=n/2;i++)
            {
                cout<<" "<<arr[n/2-i]<<" "<<arr[n/2+i];
            }
        }
        else
        {
            for(long int i=0;i<n/2;i++)
            {
                cout<<arr[n/2+i]<<" "<<arr[n/2-1-i]<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}