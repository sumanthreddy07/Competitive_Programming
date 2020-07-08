#include <bits/stdc++.h>
#include <vector>
 
using namespace std;

int main()
{
    long long int n;
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n%2==1)
            cout<<n/2<<endl;
        else
            cout<<n/2 -1<<endl;
 
    }

    return 0;
}