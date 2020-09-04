#include <iostream>
#include <vector>
#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> //for sleep
//#include <limits.h>
//#include <map> <unordered_map>
//#include <set> 

#define endl "\n"
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIRLL pair<long long,long long>
//#define PAIRII pair<int,int>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LL long long
#define L long
const LL mod=1000000007;

using namespace std;

void solve()
{
    L n;
    cin>>n;
    vector<string>S(n);
    vector<int>A(26,0);
    run(i,0,n-1)
        cin>>S[i];
    
    run(i,0,n-1)
    {
        run(j,0,S[i].length()-1)
        {
            A[S[i][j]-'a']++;
        }
    }
    int flag=0;
    run(i,0,25)
    {
        if(A[i]%n!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    

}
int main()
{
    IOS;
    L t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}