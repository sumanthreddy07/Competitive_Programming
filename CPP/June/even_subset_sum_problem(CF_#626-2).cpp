#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
#define pi 3.14159265358979323846
using namespace std;
  
int main()
{
 
    L t,i,j,sum=0;
    cin>>t;
    while(t--)
    {
        int n,flag=-1;
        cin>>n;
        vector<int> arr(n);

        run(i,0,n-1)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
                flag=i;
        }
        if(flag!=-1)
        {
            cout<<1<<endl<<flag+1<<endl;
        }
        else if(arr.size()>=2)
        {
            int a=-1,b=-1;
            run(i,0,n-1)
            {
                if(arr[i]%2==1)
                {
                    if(a==-1)
                        a=i;
                    else
                        b=i;
                }
            }
            if(a!=-1 && b!=-1)
                cout<<2<<endl<<a+1<<" "<<b+1<<endl;
            else
                cout<<-1<<endl;
            
        }
        else
        {
            cout<<-1<<endl;
        }
        

    }
    return 0;
}
