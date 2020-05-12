#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{


    long int i,n,m;

    cin>>n;
    vector <long int>arr1(n+1,0);
    vector <long int>arr2;
    for(i=0;i<n;i++)
    {
        cin>>m;
        arr1[i+1]=arr1[i]+m;
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>n;
        cout<<lower_bound(arr1.begin(),arr1.end(),n)-arr1.begin()<<endl;
    }
    
    return 0;
}