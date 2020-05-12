#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int t;
    long int x,y,a,b;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;

        cout<<(long long)min(a+a,b)*min(x,y)+(long long)a*abs(x-y)<<endl;
    }
    return 0;
}
