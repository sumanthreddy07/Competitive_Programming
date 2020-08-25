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
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
  
int main()
{
    IOS;
    L t,i;
    cin>>t;
    while(t--)
    {
        L n,k,b;
        cin>>n>>k>>b;// n sticks,b boxes, k max box size
        L temp;

        if(b>k)
            cout<<-1<<endl;
        else
        {
            vector<L>A(b,1);
            run(i,1,b-1)
                A[i]=A[i-1]+1;
            temp=(b*(b+1))/2;

            if(temp>n)
                cout<<-1<<endl;
            else
            {
                revrun(i,0,b-1)
                {
                    L value = min(n-temp,k-A[i]-(b-1-i));
                    A[i]+=value;
                    temp+=value;
                }

                if(temp!=n)
                    cout<<-1<<endl;
                else
                {
                    run(i,0,b-1)
                        cout<<A[i]<<" ";
                    cout<<endl;
                }
            }            
        }
        
    }
    return 0;
}
