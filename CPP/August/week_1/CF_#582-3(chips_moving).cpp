#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
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
    L t,i,odd=0,even=0;
    cin>>t;
    vector<LL>A(t);
    run(i,0,t-1)
    {
        cin>>A[i];
        if(A[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even>odd)
        cout<<odd<<endl;
    else
        cout<<even<<endl;
    

    return 0;
}
