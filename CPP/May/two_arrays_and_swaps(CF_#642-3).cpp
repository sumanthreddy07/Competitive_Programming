#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>

using namespace std;
 
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        sum=0;
        L n,k;
        cin>>n>>k;

        L a[n],b[n];

        run(i,0,n-1)
            cin>>a[i];
        run(i,0,n-1)
            cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);

        i=0;
        j=n-1;
        while(k--)
        {
            if(a[i]<b[j])
            {
                swap(a[i],b[j]);
                i++;
                j--;
            }
            else if(a[i]>=b[j])
                break;
        }
        run(i,0,n-1)
            sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
}