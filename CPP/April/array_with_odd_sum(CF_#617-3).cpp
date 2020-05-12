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
        long n,no_of_evens=0,sum=0,no_of_odds=0;
        cin>>n;

        long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==1)
                no_of_odds++;
            else
                no_of_evens++;

            sum+=arr[i];
        }

        if(sum%2==1 || (no_of_evens && no_of_odds))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}