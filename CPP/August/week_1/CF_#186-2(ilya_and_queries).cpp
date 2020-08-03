#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
  
int main()
{
    IOS;
    L t,i,j,flag=0,sum=0;
    string S;
    cin>>S;
    cin>>t;
    j=S.length();
    vector<L>A(j,0);

    revrun(i,0,j-2)
    {
        if(S[i]==S[i+1])
            A[i]=A[i+1]+1;
        else
            A[i]=A[i+1];
        
    }
    while(t--)
    {
        L l,r;
        cin>>l>>r;

        cout<<A[l-1]-A[r-1]<<endl;
    }
    return 0;
}
