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
 
using namespace std;
 
int main()
{
 
    int t,i,j,flag=0,sum=0,flag2=0;
    cin>>t;
    string str0="0";
    string str1="1";

    sum=pow(2,t);
    string arr[sum];
    
    for(i=1;i<=t;i++)
    {
        flag2=pow(2,i-1);
        flag=pow(2,i);

        if(i!=1)
        {
            for(j=0;j<flag2;j++)
            {
                arr[flag-j-1]=arr[j];
            }
        }
        for(j=0;j<flag2;j++)
            arr[j].insert(0,str0);

        for(j=flag2;j<flag;j++)
            arr[j].insert(0,str1);
    }

    for(i=0;i<sum;i++)
        cout<<stoi(arr[i],0,2)<<endl;

    return 0;
}