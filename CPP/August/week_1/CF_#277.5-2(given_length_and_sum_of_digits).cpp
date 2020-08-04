#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
#include <numeric>
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
    L m,s,smallval=1;
    cin>>m>>s;
    vector<int>small(m,0),large(m,9);
    small[0]=1;
    if(s>=1 && s<=m*9)
    {
        L temp=s-smallval;
        if(temp==0){}
        else
        {
            revrun(i,0,m-1)
            {
                if(temp>=9)
                {
                    temp=temp+small[i]-9;
                    small[i]=9;
                }
                else if(temp>0)
                {
                    small[i]+=temp;
                    temp=0;
                }
                else
                    break;
            }
        }
        temp=m*9-s;
        if(temp==0){}
        else
        {
            revrun(i,0,m-1)
            {
                if(temp>0)
                {
                    if(large[i]<=temp)
                    {
                        temp-=large[i];
                        large[i]=0;
                    }
                    else
                    {
                        large[i]-=temp;
                        temp=0;
                    }
                }
                else
                    break;
            }
        }
        run(i,0,m-1)
            cout<<small[i];
        cout<<" ";
        run(i,0,m-1)
            cout<<large[i];
        cout<<endl;
    }
    else if(m==1 && s==0)
        cout<<0<<" "<<0<<endl;
    else
        cout<<-1<<" "<<-1<<endl;    
    return 0;
}
