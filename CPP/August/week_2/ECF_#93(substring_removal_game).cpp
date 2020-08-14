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
#include <queue>

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
  
int main()
{
    IOS;
    L t;
    cin>>t;
    while(t--)
    {
        int flag=1;
        L A=0,B=0,count=0;
        string S;
        cin>>S;
        priority_queue<L>Q;
        run(i,0,S.length()-1)
        {
            if(S[i]=='1')
                count++;
            else
            {
                if(count)
                    Q.push(count);
                count=0;
            }
        }
        if(count)
            Q.push(count);
        while(!Q.empty())
        {
            if(flag==1)
            {
                A+=Q.top();
                Q.pop();
            }
            else
            {
                B+=Q.top();
                Q.pop();
            }
            flag=1-flag;
        }
        if(A>B)
            cout<<A<<endl;
        else
            cout<<B<<endl;
        

    }
    return 0;
}
