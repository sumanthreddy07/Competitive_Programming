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
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL count=0,maxi=0,a,b,c,A,B,C,n;
        cin>>a>>b>>c>>n;

        maxi=max(a,b);
        maxi=max(maxi,c);
        
        count+=abs(maxi-a);
        A=abs(maxi-a);
        count+=abs(maxi-b);
        B=abs(maxi-b);
        count+=abs(maxi-c);
        C=abs(maxi-c);
        
        if(A+B+C<=n)
        {
            if((n-A-B-C)%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}
