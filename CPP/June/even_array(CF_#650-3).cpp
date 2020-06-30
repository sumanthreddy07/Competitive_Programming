#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
#define pi 3.14159265358979323846
using namespace std;
 
using namespace std;
 
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        L num,count0=0,count1=0;
        cin>>num;

        vector <int> arr(num);

        run(i,0,num-1)
        {
            cin>>arr[i];

            if(i%2==0)
            {
                if(arr[i]%2!=0)
                    count1++;
            }
            else
            {
                if(arr[i]%2==0)
                    count0++;
            }
        }
        if(count0==count1)
            cout<<count0<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}