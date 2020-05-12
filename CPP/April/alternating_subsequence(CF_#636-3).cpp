#include <bits/stdc++.h>
#include <cmath>
#include <vector>
 
using namespace std;

int oppositesign(long long int x,long long int y)
{
    if((x>0 && y>0) || (x<0 && y<0))
        return 0;
    else
        return 1;
}
 
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int i,n,max,sum=0;
        cin>>n;
        vector <long long int> arr(n);

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        max=arr[0];

        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
                max=arr[i];

            if(oppositesign(arr[i],arr[i+1]) && i+1<n)
            {
                sum+=max;
                max=arr[i+1];
            }
        }
        sum+=max;
        cout<<sum<<endl;
    }

    return 0;
}