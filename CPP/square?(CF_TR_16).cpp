#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    long int t;
    cin>>t;
    while(t--)
    {
        long a,b,c,d,flag=0;
        cin>>a>>b>>c>>d;
        
        if(a==c)
        {
            if(b+d==a)
                flag=1;
        }
        if(a==d)
        {
            if(b+c==a)
                flag=1;    
        }
        if(b==c)
        {
            if(a+d==b)
                flag=1;
        }
        if(b==d)
        {
            if(a+c==b)
                flag=1;
        }
        if(flag==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
        
    }
    return 0;
}