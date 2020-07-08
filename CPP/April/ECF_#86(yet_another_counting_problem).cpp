#include <bits/stdc++.h>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,q;;
        long long i,l,r,sum=0;
        cin>>a>>b>>q;

        long arr[40001]={0};

        for(i=0;i<a*b;i++)
                arr[i+1]=arr[i]+((i%a)%b!=(i%b)%a);

        while(q--)
        {
            sum=0;
            cin>>l>>r;

            sum+= (r+1)/(a*b)*arr[a*b] +arr[(r+1)%(a*b)];
            sum-= l/(a*b)*arr[a*b] +arr[l%(a*b)];
            cout<<sum<<" ";
    
        }
            cout<<endl;
    }
    return 0;
}