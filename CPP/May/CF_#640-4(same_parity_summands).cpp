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
 
    L t,i,j,flag=0,sum=0,turn=0;
    cin>>t;
    while(t--)
    {
        turn=0;
        flag=0;
        sum=0;
        L alice=0,bob=0,num,prev=0;
        vector<L> arr;

        cin>>num;

        run(i,1,num)
        {
            cin>>j;
            arr.push_back(j);
        }

        while(arr.size()>0)
        {
            if(turn==0)
            {
                sum+=arr[0];
                arr.erase(arr.begin());

                if(sum>prev)
                {
                    alice+=sum;
                    prev=sum;
                    sum=0;
                    turn=1;
                    flag++;
                }
            }
            else
            {

                sum+=arr[arr.size()-1];
                arr.pop_back();
                if(sum>prev)
                {
                    bob+=sum;
                    prev=sum;
                    sum=0;
                    turn=0;
                    flag++;
                }
            }
        }

        if(sum>0)
        {
            if(turn==1)
            {
                bob+=sum;
                flag++;
            }
            else
            {
                alice+=sum;
                flag++;
            }
        }
        cout<<flag<<" "<<alice<<" "<<bob<<endl;

    }
    return 0;
}