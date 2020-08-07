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
#include <queue>
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
        L n,count=0;
        cin>>n;

        vector<int>B(n,0);
        string A;
        cin>>A;    
        if(n==1)
        {
            cout<<1<<endl<<1<<endl;
        }
        else if(n==2)
        {
            if(A[0]!=A[1])
                cout<<1<<endl<<1<<" "<<1<<endl;
            else
                cout<<2<<endl<<1<<" "<<2<<endl;
            
        }
        else
        {
            priority_queue<int>Q0,Q1;
            int last=0;
            run(i,0,n-1)
            {
                if(A[i]=='0')
                {
                    if(Q1.empty())
                    {  
                        last++;
                        Q0.push(last);
                        B[i]=last;
                    }
                    else
                    {
                        B[i]=Q1.top();
                        Q0.push(B[i]);
                        Q1.pop();
                    }
                    
                }
                else
                {
                    if(Q0.empty())
                    {
                        last++;
                        Q1.push(last);
                        B[i]=last;
                    }
                    else
                    {
                        B[i]=Q0.top();
                        Q1.push(B[i]);
                        Q0.pop();
                    }
                    
                }
                
            }
            cout<<last<<endl;
            run(i,0,n-1)
                cout<<B[i]<<" ";
            cout<<endl;
        }

    }
    return 0;
}
