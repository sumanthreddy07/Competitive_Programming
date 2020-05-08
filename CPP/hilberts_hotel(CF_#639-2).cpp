#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    long long int t;
    cin>>t;
    while(t--)
    {
        long n,i,flag=0;
        cin>>n;
        long long temp,arr[n+1]={0};
 
        for(i=0;i<n;i++)
        {
            cin>>temp;
            temp=(temp+i)%n;
            temp=(temp+n)%n;
 
            if(arr[temp]==1)
                flag=1;
            else
                arr[temp]=1;
        }
 
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}