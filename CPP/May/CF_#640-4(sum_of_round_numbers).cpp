#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define LL long long
#define L long
#define run(i,a,b) for(int i=a;i<=b;i++)
#define revrun(i,a,b) for(int i=b;i>=a;i--)
#define PAIR pair<long,long>

using namespace std;
 
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        vector<L> v;
        L num,power=0;
        cin>>num;

        while(num!=0)
        {
            sum=num%10;

            if(sum!=0)
                v.push_back(sum*pow(10,power));

            power++;
            num=num/10;
        }

    cout<<v.size()<<endl;
    run(i,0,v.size()-1)
        cout<<v[i]<<" ";
    
    cout<<endl;
    }
    return 0;
}