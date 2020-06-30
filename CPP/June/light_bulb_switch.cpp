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
 
    L i,j,first=-1,second=-1,n;
    string str;
    cin>>str;
    n=str.length();
    
    run(i,0,n-1)
    {
        if(str[i]=='1')
        {
            second=i;
            if(first==-1)
                first=i;
        }
    }
    if(first==-1)
        cout<<str;
    else
    {
    
        run(i,0,n-1)
        {
            if(i>=first && i<=second)
                cout<<'1';
            else
                cout<<'0';
            
        }
    }
    return 0;
}