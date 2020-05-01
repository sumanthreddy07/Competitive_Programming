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
        long m,n,temp,start,flag=0;
        cin>>n>>m;

        vector<long> arr(n);
        long arr2[m]={0};
        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<m;i++)
            cin>>arr2[i];
        
        sort(arr2,arr2+m);

        start=arr2[0]-1;

        for(int i=0;i<m-1;i++)
        {
            if( (arr2[i]+1) != arr2[i+1] )
            {
                sort(arr.begin()+(start),arr.begin()+arr2[i]+1);
                start=arr2[i+1]-1;
            }
        }
        sort(arr.begin()+(start),arr.begin()+(arr2[m-1]+1));

        for(int i=1;i<n;i++)
        {
            if(arr[i-1]>arr[i])
                flag=1;
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;        

    }
    return 0;
}