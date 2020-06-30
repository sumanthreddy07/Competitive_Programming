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
        string s;
        cin>>s;

        run(i,0,s.length()-1)
        {
            if(i==0)
                cout<<s[i];
            else if(i%2==1)
                cout<<s[i];
        }
        cout<<endl;


    }
    return 0;
}