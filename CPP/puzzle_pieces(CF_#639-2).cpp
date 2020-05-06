#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    long int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        
        if(a==1 || b==1)
            cout<<"YES"<<endl;
        else if(a==2 && b==2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            
    }

    return 0;
}