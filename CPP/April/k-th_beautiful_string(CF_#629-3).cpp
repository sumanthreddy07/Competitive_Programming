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

        int count=0;
        long int n,k,i;
        cin>>n>>k;
//        long int num=n*(n-1);
        string s(n, 'a');
//        num=num/2;
        
        for(i=n-2;i>=0;i--)
        {
            if(k<=(n-1-i))
            {
                s[i]='b';
                s[n-k]='b';
                break;
            }

            k-=(n-1-i);
        }
        cout<<s<<endl;
    }
    return 0;
}