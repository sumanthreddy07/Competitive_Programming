#include <iostream>
//#include <vector>
#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    LL t,i;
    int sum=101;
    string S;
    int j,count[10]={0},count2[10]={0};
    cin>>S;
    t=S.length();
    int arr[t];
    sum=int(S[0])%8;
    run(i,0,t-1)
    {
        arr[i]=int(S[i])%8;
        if(count[arr[i]]==0)
            count[arr[i]]=i+1;
        count2[arr[i]]=i+1;
    }
    if(count[1]>0)
        sum=min(sum,count[1]);
    if(count[3]>0)
        sum=min(sum,count[3]);
    if(count[5]>0)
        sum=min(sum,count[5]);   
    if(count[7]>0)
        sum=min(sum,count[7]);

    if(count[0]>0)
        cout<<"YES";
    else if(count[1]<count2[6] && count[1]!=0 && count2[6]!=0)
        cout<<"YES";
    else if(count[2]<count2[4] && count[2]!=0 && count2[4]!=0)
        cout<<"YES";
    else if(count[3]<count2[2] && count[3]!=0 && count2[2]!=0)
        cout<<"YES";
    else if(count[4]<count2[0] && count[4]!=0 && count2[0]!=0)
        cout<<"YES";
    else if(count[5]<count2[6] && count[5]!=0 && count2[6]!=0)
        cout<<"YES";
    else if(count[6]<count2[4] && count[6]!=0 && count2[4]!=0)
        cout<<"YES";
    else if(count[7]<count2[2] && count[7]!=0 && count2[2]!=0)
        cout<<"YES";
    else if(sum<count[1] && count[1]<count2[2] && count[1]!=0 && count2[2]!=0)
        cout<<"YES";
    else if(sum<count[3] && count[3]<count2[6] && count[3]!=0 && count2[6]!=0)
        cout<<"YES";
    else if(sum<count[4] && count[4]<count2[4] && count[4]!=0 && count2[4]!=0)
        cout<<"YES";
    else if(sum<count[5] && count[5]<count2[2] && count[5]!=0 && count2[2]!=0)
        cout<<"YES";
    else if(sum<count[7] && count[7]<count2[6] && count[7]!=0 && count2[6]!=0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
