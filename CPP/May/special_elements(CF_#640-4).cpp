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
 
    L t,i,j,sum=0;
    cin>>t;
    while(t--)
    {
        L flag=0;
        L n;
        cin>>n;
        L arr[n];
        L summ[n+1];
        L num_arr[n+1]={0};

        run(i,0,n-1)        
        {
            cin>>arr[i];
        }

        summ[0]=arr[0];
        run(i,1,n-1)
        {
            summ[i]=arr[i]+summ[i-1];
        }
        run(i,0,n-1)
        {
            run(j,i,n-1)
            {
                sum=summ[j];
                if(i>0)
                    sum=sum-summ[i-1];
                if(sum<=n && j-i>=1)
                    num_arr[sum]=1;
            }
        }
        run(i,0,n-1)
        {
            if(num_arr[arr[i]])
                flag++;
        }
        cout<<flag<<endl;

    }
    return 0;
}