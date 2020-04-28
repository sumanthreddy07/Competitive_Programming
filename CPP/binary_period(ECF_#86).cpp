#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{
 
    long int t;
    cin>>t;
    while(t--)
    {  
        string s;
        long count0=0,count1=0,maxi;
        cin>>s;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
                count0++;
            else
                count1++;
        }

        if(count0==0 || count1==0)
            cout<<s;
        else
        {
            maxi=count0+count1;
            for(int i=0;i<maxi;i++)
                cout<<"01";
        }

        cout<<endl;
    }
    return 0;
}