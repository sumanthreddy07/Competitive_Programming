#include <bits/stdc++.h>

using namespace std;
 
int main()
{
 
    long int t;
    cin>>t;
    while(t--)
    {
    long n;
    cin>>n;
    long arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int flag=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+2;j<n;j++)
        {
            if(arr[i]==arr[j])
                flag=1;

            if(flag==1)
                break;
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

    return 0;
}