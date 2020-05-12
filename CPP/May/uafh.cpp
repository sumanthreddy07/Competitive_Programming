#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>

using namespace std;
 
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {

        LL n,k,num2;
        cin>>n>>k;

        if( (n-k+1)%2==1 && (n-k)>=0)
        {
            cout<<"YES"<<endl;
            run(i,1,k-1)
            {
                cout<<1<<" ";
                n--;
            }
            cout<<n<<endl;
        }
        else if( (n-2*k+2)%2==0 && (n-2*k)>=0)
        {
            cout<<"YES"<<endl;
            run(i,1,k-1)
            {
                cout<<2<<" ";
                n-=2;
            }
            cout<<n<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

    }
    return 0;
}