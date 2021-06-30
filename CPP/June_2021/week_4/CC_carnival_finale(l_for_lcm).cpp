#include <iostream>

#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define mod 1000000007

using namespace std;

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
void solve()
{
    int q,n,count,val;
    cin>>q>>n;

    for(int i=1;i<=q;i++)
    {   
        cin>>val;
        count=0;
        for(int j=1;j*j<val;j++)
        {
            if(val%j==0 && gcd(val/j,j)==1 )
                    count++;
        }
        cout<<count<<endln;
    }

}
int main()
{
    IOS;
    solve();
    return 0;
}