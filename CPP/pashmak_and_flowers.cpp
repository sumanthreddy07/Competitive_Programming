#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{

    vector<long long> arr1;
    long long n,m,i,j,count1=0,count2=0;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        arr1.push_back(m);
    }

    n=*max_element(arr1.begin(),arr1.end());
    m=*min_element(arr1.begin(),arr1.end());

    for(i=0;i<arr1.size();i++)
    {
        if(arr1[i]==n)
            count1++;

        if(arr1[i]==m)
            count2++;

    }
    if(n-m==0)
        cout<<(long long)(n-m)<<" "<<(long long)(count1*(count2-1))/2;
    else
        cout<<(long long)(n-m)<<" "<<(long long)count1*count2;
    return 0;
}