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
 
int main()
{
    cout<<setprecision(9)<<fixed;

    L t,i,j,flag=0;
    double sum=0;
    cin>>t;
    while(t--)
    {
        sum=0;
        L n;
        cin>>n;
        
        run(i,0,n/2)
        {
            sum+=( cos( pi/(n)*i) )*2;
        }    
        sum--;
        cout<<sum<<endl;
        

    }
    return 0;
}