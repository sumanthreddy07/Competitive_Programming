#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
#include <set>
//#include <iterator>
//#define ITERATOR map<L,L>::iterator iter;
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const LL mod=1000000007;

using namespace std;
  
int main()
{
    IOS;
    L n,sum=0,size=100001,inp;
    cin>>n;
    L A[size]={0};
    sum=n;
    run(i,0,n-1)
    {
        cin>>inp;
        A[inp]++;
    }

    set<PAIR>S;
    run(i,1,size-1)
        if(A[i])
            S.insert({-A[i],i});
    
    L t;
    char a;
    cin>>t;
    while(t--)
    {
        cin>>a>>inp;
        S.erase({-A[inp],inp});
        if(a=='+')
        {
            sum++;
            A[inp]++;
        }
        else
        {
            sum--;
            A[inp]--;
        }
        S.insert({-A[inp],inp});
        if(sum<8)
            cout<<"NO"<<endl;
        else
        {
            auto iter =S.begin();
            int val1=-iter->first;
            iter++;

            if(val1>=8)
            {
                cout<<"YES"<<endl;
                continue;
            }
            
            if(val1<4)
            {
                cout<<"NO"<<endl;
                continue;
            }
            
            if(iter==S.end())
            {
                cout<<"NO"<<endl;
                continue;
            }
            
            int val2=-iter->first;
            iter++;

            if(val2<2)
            {
                cout<<"NO"<<endl;
                continue;
            }
            
            if(val2>=4 || (val1>=6 && val2>=2))
            {
                cout<<"YES"<<endl;
                continue;
            }
            
            if(iter==S.end())
            {
                cout<<"NO"<<endl;
                continue;
            }
            int val3=-iter->first;

            if(val3<2)
            {
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
        }
        
        
    }

    return 0;
}
