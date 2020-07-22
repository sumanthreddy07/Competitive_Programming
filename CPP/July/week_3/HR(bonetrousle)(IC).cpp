#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n,k,b;
        cin>>n>>k>>b;

        LL mini=(b*(b+1))/2;
        LL maxi=(k*(k+1))/2 - ((k-b+1)*(k-b))/2;

//        cout<<mini<<endl<<maxi;
        if( !(n>=mini && n<=maxi) )
            cout<<-1<<endl;
        else
        {
            flag=0;
            vector<L>arr(b);
            sum=(n-b)/n;
            LL finalsum=0;
            if(sum>=1)
            {
                run(i,0,b-1)
                {
                    arr[i]=b-i+sum-1;
                    finalsum+=arr[i];
                }
            }
            else
            {
                run(i,0,b-1)
                {
                    arr[i]=b-i;    
                    finalsum+=arr[i];
                }
            }
            
            i=0;
            while(mini!=n)
            {
                if(arr[0]>k)
                {
                    flag=1;
                    break;
                }
                arr[i%b]++;
                mini++;
                i++;
            }

            if(flag==1)
                cout<<-1<<endl;
            else
            {
                run(i,0,b-1)
                    cout<<arr[i]<<" ";
                cout<<endl;
            }
        }
        
    }
    return 0;
}
