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
 
    L a1,a2,a3,a4,sum=0;
    cin>>a1>>a2>>a3>>a4;
    
    string s;
    cin>>s;

    L num=s.length();
    run(i,0,num-1)
    {
        if(s[i]=='1')
            sum+=a1;
        else if(s[i]=='2')
            sum+=a2;
        else if(s[i]=='3')
            sum+=a3;
        else
        sum+=a4;
        
    }

    cout<<sum;
    return 0;
}