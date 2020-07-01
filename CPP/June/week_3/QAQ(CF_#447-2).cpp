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
 
    L newQ=0,i,Q=0,A=0,flag=0,sum=0;
    string str;
    cin>>str;
    
    run(i,0,str.length()-1)
    {
        if(str[i]=='Q')
            Q++;
    }
    run(i,0,str.length()-1)
    {
        if(str[i]=='Q')
            newQ++;
        if(str[i]=='A')
            sum+=newQ*abs(Q-newQ);
    }

    cout<<sum<<endl;
    return 0;
}
