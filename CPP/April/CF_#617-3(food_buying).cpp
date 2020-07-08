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
        long n;
        cin>>n;

        long sum=n;
        while(n>=10)
        {
            sum+=n/10;
            n=n/10+n%10;
        }
        cout<<sum<<endl;

    }
    return 0;
}