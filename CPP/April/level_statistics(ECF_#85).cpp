#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{
 
    long int t,i,n,temp1,temp2,a,b;
    string s="YES";
    cin>>t;
    while(t--)
    {
        s="YES";   
        cin>>n;
        temp1=0;
        temp2=0;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;

            if(a<temp1 || b<temp2 || a<b || a-temp1<b-temp2)
                s="NO";

            temp1=a;
            temp2=b;
            
        }

        cout<<s<<endl;

    }

    return 0;
}