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
        long int a=0,b=0,i,sum=0,last_a=0,last_b=0;
        map<pair<pair<long, long>, pair<long, long>>,long>mapp;
        string s;
        cin>>s;

        for(i=0;i<s.length();i++)
        {
            last_a=a;
            last_b=b;

            if( s[i]=='N')
                a++;
            else if( s[i]=='S')
                a--;
            else if( s[i]=='E')
                b++;
            else if( s[i]=='W')
                b--;

            if (mapp[{{last_a, last_b}, {a, b}}])
            {
                sum++;
            }
            else
            {
                sum += 5;
                mapp[{{a, b}, {last_a, last_b}}] = 1;
                mapp[{{last_a, last_b}, {a, b}}] = 1;
            }
            
        }
    cout<<sum<<endl;

    }
    return 0;
}