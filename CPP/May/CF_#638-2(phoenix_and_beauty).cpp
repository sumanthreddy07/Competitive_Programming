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
        long j=0,n,k,count=0;
        cin>>n>>k;

        long result[n]={0},arr[n],hashin[n+1]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(hashin[arr[i]]==0)
            {
                result[j]=arr[i];
                j++;
            }
            hashin[arr[i]]=1;
        }
        for(int i=0;i<=n;i++)
        {
            if(hashin[i]==1)
                count++;

            if(result[i]==0)
                result[i]=1;
        }
        
        if(count>k)
            cout<<-1<<endl;
        else
        {
            cout<<n*k<<endl;
            for(int i=0;i<n;i++)
                for(j=0;j<k;j++)
                    cout<<result[j]<<" ";
            cout<<endl;
        }
        
    }
    return 0;
}