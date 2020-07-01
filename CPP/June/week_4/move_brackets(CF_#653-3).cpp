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
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        L n;
        string s;
        cin>>n;
        cin>>s;

        stack<char> sta;
        
        run(i,0,n-1)
        {
            if(s[i]==')')
            {
                if(!sta.empty() && sta.top()=='(')
                    sta.pop();
                else
                    sta.push(s[i]);
            }
            else
            {
                sta.push(s[i]);
            }
        }
        cout<<sta.size()/2<<endl;    
        
    }
    return 0;
}