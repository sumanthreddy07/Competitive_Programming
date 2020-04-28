#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    long int t;
    long long int num;
    cin>>t;
    while(t--)
    {
        cin>>num;
        if(num%2==0)
            num--;

        cout<<num<<" ";

    }
    return 0;
}