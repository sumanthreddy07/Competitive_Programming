#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
//#include <map>
//#include <iterator>
//#define ITERATOR map<L,L>::iterator iter;
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
  
int main()
{
    IOS;
    L t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        L n;
        cin>>n;
        vector<int>A(n);

        run(i,0,n-1)
            cin>>A[i];

        if(n==1)
            cout<<"YES"<<endl;
        else
        {
            sort(A.begin(),A.end());

            run(i,1,n-1)
            {
                if(A[i]-A[i-1]>=2)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
