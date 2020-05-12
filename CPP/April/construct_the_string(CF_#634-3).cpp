#include <bits/stdc++.h>
#define str1 "abcdefghijklmnopqrstuvwxyz"

using namespace std;

int main()
{

    int t,b;
    long int a,n;
    cin>> t;
    while(t--)
    {
        cin>>n>>a>>b;

        for(int i=0;i<n;i++)
        {
            cout<<str1[i%b];
        }
        cout<<endl;
    }
    return 0;
}