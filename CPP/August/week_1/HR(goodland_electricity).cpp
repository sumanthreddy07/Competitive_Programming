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
    L n,k;
    int flag=0;
    cin>>n>>k;

    vector<int>A(n);
    run(i,0,n-1)
        cin>>A[i];
    
    L start,min=0,max=n-1,count=0,flag2=0;
    while(min<=max)
    {       
        flag2=1;
        start=min+k-1;
        if(start>max)
            start=n-1;  
        
        while(start>=min-k+1 && A[start]!=1)
        {
            start--;
        }
        if(start<min-k+1)
        {
            flag2=0;
            break;
        }
        else
        {
            min=start+k;
            count++;
        }
        
    }
    if(flag2==0)
        cout<<-1<<endl;
    else
        cout<<count<<endl;
    
    return 0;
}
