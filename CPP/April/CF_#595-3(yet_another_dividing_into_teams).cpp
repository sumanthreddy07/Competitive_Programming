#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    int t,flag=1;
    cin>>t;
    while(t--)
    {
        flag=1;
        long n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        sort(arr,arr+n);
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]==(arr[i-1]+1))
            flag=2;
        }

        cout<<flag<<endl;
    }
    return 0;
}