#include <bits/stdc++.h>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;

    map<string, int>reg_sys;

    while(n--)
    {
        cin>>s;

        if(reg_sys.count(s)==0)
        {
            cout<<"OK"<<endl;
            reg_sys[s]=1;
        }
        else
        {
            cout<<s<<reg_sys[s]<<endl;
            reg_sys[s]+=1;
        }
    }

    return 0;
}