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
        int arr[26]={0};
        string s;
        long int n,m,temp;
        cin>>n>>m;
        long val[n]={0};
        cin>>s;

        for(int i=0;i<m;i++)
        {
            cin>>temp;
            val[temp-1]++;
        }
        
        for(int i=n-1;i>0;i--)
            val[i-1]+=val[i];

        
        for(int i=0;i<n;i++)
            arr[s[i]-97]+=val[i]+1;
        

        for(int i=0;i<26;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;

    }
    return 0;
}