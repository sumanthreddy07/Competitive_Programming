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
        long int n,q,temp,last_pos,count;
        cin>>n;

        long arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i];

        for(int i=1;i<=n;i++)
        {
            count=1;
            last_pos=arr[i];
            while(i!=last_pos)
            {
                count++;
                last_pos=arr[last_pos];
            }
            cout<<count<<" ";

        }
        cout<<endl;
    }
    return 0;
}